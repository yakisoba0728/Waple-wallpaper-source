// Function: FUN_14049fe9c
// Addr: 14049fe9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fe9c(char *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar5;
  byte *pbVar4;
  
  bVar1 = (char)in_RAX + 0x70;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar4 = *pbVar4 ^ bVar1;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  iVar2 = (int)pbVar4 + 0x54050002;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || (char)iVar2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + (char)((uint)iVar2 >> 8)) | 0xe640003;
  pcVar5 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) >> 9,(char)param_1));
  *pcVar5 = *pcVar5 + (char)(uVar3 + *(int *)(ulonglong)uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

