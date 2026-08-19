// Function: FUN_1404a20e8
// Addr: 1404a20e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a20e8(char *param_1,byte *param_2)

{
  byte bVar1;
  int in_EAX;
  char *pcVar2;
  char in_AF;
  
  *param_1 = *param_1 + '\b';
  TaskRegister(uRam000000001ffbffbf);
  bVar1 = (byte)(in_EAX + 0x34050002);
  pcVar2 = (char *)(ulonglong)
                   (CONCAT22((short)((uint)(in_EAX + 0x34050002) >> 0x10),
                             CONCAT11(((char)bVar1 < '\0') << 7 | (bVar1 == 0) << 6 | in_AF << 4 |
                                      ((POPCOUNT(bVar1) & 1U) == 0) << 2,bVar1)) | 0x200);
  *param_1 = *param_1 + '\b';
  *param_2 = *param_2 | bVar1;
  *pcVar2 = *pcVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

