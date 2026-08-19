// Function: FUN_1404a5a6c
// Addr: 1404a5a6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5a6c(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint *in_RAX;
  char *pcVar3;
  byte *pbVar2;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar1;
  *(byte *)(in_RAX + -0x1df77ffe) = (byte)in_RAX[-0x1df77ffe] + (char)param_1;
  *(byte *)in_RAX = (byte)*in_RAX | bVar1;
  *param_4 = *param_4 + bVar1;
  bVar1 = bVar1 | bRam0000000146cc6483;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar2 = *pbVar2 ^ bVar1;
  *pcVar3 = *pcVar3 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

