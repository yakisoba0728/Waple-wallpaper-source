// Function: FUN_1404c3560
// Addr: 1404c3560
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3560(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  char *pcVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX | (byte)*in_RAX;
  uVar3 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11(((char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8))
                                  * '\x02',bVar2)) | 0xe640000;
  pcVar4 = (char *)(ulonglong)uVar3;
  *pcVar4 = *pcVar4 + bVar2;
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)pcVar4 = uVar1;
  pcVar4 = (char *)((ulonglong)uVar3 ^ 0x16);
  *pcVar4 = *pcVar4 + (char)pcVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

