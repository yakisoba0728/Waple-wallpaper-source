// Function: FUN_1404c9208
// Addr: 1404c9208
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */

void FUN_1404c9208(ulonglong param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  uint *puVar3;
  char *pcVar4;
  char cVar5;
  char *unaff_RBX;
  char unaff_R12B;
  
  cVar5 = (char)param_2;
  *in_RAX = *in_RAX & (uint)&stack0x00000000;
  bVar1 = (byte)in_RAX | (byte)*in_RAX;
  uVar2 = (int)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                        CONCAT11((byte)((ulonglong)in_RAX >> 8) &
                                                 (byte)((ulonglong)param_2 >> 8),bVar1)) >> 8),bVar1
                       ) + 0x16d41200;
  puVar3 = (uint *)(ulonglong)uVar2;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  if (*unaff_RBX != '\0') {
    cRam0000000000000000 = cRam0000000000000000 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)puVar3 + -0x15) = *(char *)((longlong)puVar3 + -0x15) + (char)(uVar2 >> 8);
  *puVar3 = *puVar3 ^ uVar2;
  puRamfffffffffffffff8 = &UNK_1404c923d;
  uVar2 = func_0x0001784cc428();
  puVar3 = (uint *)(param_1 & 0xffffffff);
  pcVar4 = (char *)(ulonglong)uVar2;
  *pcVar4 = *pcVar4 + unaff_R12B;
  *(char *)puVar3 = (char)*puVar3 + (char)puVar3;
  *(char *)((longlong)puVar3 + -0x15) =
       *(char *)((longlong)puVar3 + -0x15) + (char)((ulonglong)puVar3 >> 8);
  *puVar3 = *puVar3 ^ (uint)param_1;
  puRamfffffffffffffff8 = &UNK_1404c924d;
  uVar2 = func_0x0001784cc438();
  puVar3 = (uint *)((ulonglong)pcVar4 & 0xffffffff);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + unaff_R12B;
  *(char *)puVar3 = (char)*puVar3 + (char)puVar3;
  *(char *)((longlong)puVar3 + -0x15) = *(char *)((longlong)puVar3 + -0x15) + cVar5;
  *puVar3 = *puVar3 ^ (uint)pcVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

