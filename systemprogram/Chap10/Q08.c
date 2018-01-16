// Q08.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *pInFile = NULL; // �ǂݍ��݃t�@�C���̃t�@�C���|�C���^
    size_t size_tFileSize = 0; // �ǂݍ��݃t�@�C���̃T�C�Y

    if (argc != 2) {
        printf("�����̐����Ⴂ�܂��B\n");
        return -1;
    }
    
    pInFile = fopen(argv[1], "rb"); // �ǂݍ��݃t�@�C���̃I�[�v��
    if (pInFile == NULL) {
        printf("InFile��fopen��NULL�����^�[���B\n");
        return -1;
    }
    
    // �t�@�C���̃T�C�Y�𒲂ׂ�
    fseek(pInFile, 0, SEEK_END); // �t�@�C���̓ǂݍ��݈ʒu�𖖔��ɃZ�b�g
    size_tFileSize = ftell(pInFile); // �����̃o�C�g�ʒu�i�t�@�C���T�C�Y�j���擾
    printf("�t�@�C���̃T�C�Y�F%d�o�C�g\n", size_tFileSize);
    
    fclose(pInFile);
    
    return 0;
}
