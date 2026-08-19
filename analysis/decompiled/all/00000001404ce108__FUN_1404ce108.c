// Function: FUN_1404ce108
// Addr: 1404ce108
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce108(undefined1 *param_1,char param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;
  int unaff_EBX;
  char unaff_BPL;
  int unaff_EDI;
  uint *puVar4;
  
  *param_1 = *param_1;
  uVar3 = unaff_EDI + 0xe4050002;
  bVar2 = (byte)uVar3 | *(byte *)(ulonglong)uVar3;
  uVar1 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  puVar4 = (uint *)(ulonglong)uVar1;
  *(byte *)puVar4 = (byte)*puVar4 + (char)param_1;
  pcVar5 = param_1 + -1;
  if (pcVar5 != (char *)0x0 && (byte)*puVar4 == 0) {
    *puVar4 = *puVar4 & uVar1;
    *(byte *)puVar4 = (byte)*puVar4 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 + (char)(uVar3 >> 8);
  *(byte *)puVar4 = (byte)*puVar4 + bVar2;
  *(byte *)((longlong)puVar4 + -0x41) = *(byte *)((longlong)puVar4 + -0x41) + param_2;
  cRam00000000bf6effff = cRam00000000bf6effff + unaff_BPL;
  uVar1 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + (byte)pcVar5;
  pcVar6 = param_1 + -2;
  if (pcVar6 == (char *)0x0 || (byte)*puVar4 != 0) {
    *pcVar6 = *pcVar6 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam00000000e269e187 = iRam00000000e269e187 + unaff_EBX + (uint)CARRY1((byte)uVar1,(byte)pcVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

