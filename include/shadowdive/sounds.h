#ifndef _SD_SOUNDS_H
#define _SD_SOUNDS_H

#ifdef __cplusplus 
extern "C" {
#endif

#ifndef _SD_WRITER_H
typedef struct sd_writer_t sd_writer;
#endif

#ifndef _SD_READER_H
typedef struct sd_reader_t sd_reader;
#endif

typedef struct sd_sound_t {
    unsigned int len;
    char *data;
} sd_sound;

typedef struct sd_sound_file_t {
    unsigned int sound_count;
    sd_sound **sounds;
} sd_sound_file;

int sd_sounds_load(sd_sound_file *sf, const char *filename);
int sd_sounds_save(sd_sound_file *sf, const char *filename);
sd_sound_file* sd_sounds_create();
void sd_sounds_delete(sd_sound_file *sf);
void sd_sound_to_au(sd_sound *sound, const char *filename);

#ifdef __cplusplus
}
#endif

#endif // _SD_SOUNDS_H
