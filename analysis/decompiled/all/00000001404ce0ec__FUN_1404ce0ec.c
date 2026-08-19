// Function: FUN_1404ce0ec
// Addr: 1404ce0ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce0ec(undefined1 *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  char *pcVar6;
  char *pcVar7;
  int unaff_EBX;
  char unaff_BPL;
  char *unaff_RSI;
  char *unaff_RDI;
  uint *puVar5;
  
  *param_1 = *param_1;
  cVar2 = (char)unaff_RDI;
  *unaff_RSI = *unaff_RSI + cVar2;
  *unaff_RDI = *unaff_RDI + cVar2;
  if (*unaff_RDI != '\0') {
    *unaff_RDI = *unaff_RDI + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[-0x31ffc5b3] = unaff_RDI[-0x31ffc5b3] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1;
  uVar4 = in_EAX + 0xe4050002;
  bVar3 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  uVar1 = CONCAT31((int3)(uVar4 >> 8),bVar3);
  puVar5 = (uint *)(ulonglong)uVar1;
  *(byte *)puVar5 = (byte)*puVar5 + (char)param_1;
  pcVar6 = param_1 + -1;
  if (pcVar6 == (char *)0x0 || (byte)*puVar5 != 0) {
    *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
    *(byte *)puVar5 = (byte)*puVar5 + bVar3;
    *(byte *)((longlong)puVar5 + -0x41) = *(byte *)((longlong)puVar5 + -0x41) + (char)param_2;
    cRam00000000bf6effff = cRam00000000bf6effff + unaff_BPL;
    uVar1 = *puVar5;
    *(byte *)puVar5 = (byte)*puVar5 + (byte)pcVar6;
    pcVar7 = param_1 + -2;
    if (pcVar7 == (char *)0x0 || (byte)*puVar5 != 0) {
      *pcVar7 = *pcVar7 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iRam00000000e269e187 = iRam00000000e269e187 + unaff_EBX + (uint)CARRY1((byte)uVar1,(byte)pcVar6)
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar5 = *puVar5 & uVar1;
  *(byte *)puVar5 = (byte)*puVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

