// Function: FUN_1404ce0a8
// Addr: 1404ce0a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce0a8(char *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *in_RAX;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  char cVar10;
  undefined6 uVar11;
  int unaff_EBX;
  char unaff_BPL;
  char *unaff_RSI;
  byte *unaff_RDI;
  char *pcVar6;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)param_2;
  *unaff_RSI = *unaff_RSI + (byte)in_RAX;
  *(int *)in_RAX = (int)&stack0x00000000;
  *param_1 = *param_1 + (char)unaff_EBX;
  bVar1 = (byte)in_RAX | *in_RAX;
  uVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + 1) + -0xbf00d00) -
          (uint)(0xfe < bVar1);
  pcVar8 = param_1 + -1;
  if (pcVar8 == (char *)0x0 || uVar4 == 0) {
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  }
  cVar10 = (char)((ulonglong)param_2 >> 8) + *(char *)(ulonglong)uVar4;
  cVar2 = ((byte)uVar4 & bVar9) + bVar9;
  uVar5 = CONCAT31((int3)(uVar4 >> 8),cVar2);
  pcVar6 = (char *)(ulonglong)uVar5;
  *pcVar6 = *pcVar6 + cVar2;
  *pcVar8 = *pcVar8 + (char)(uVar4 >> 8);
  cVar2 = (char)pcVar8;
  *unaff_RDI = *unaff_RDI + cVar2;
  if (*unaff_RDI != 0) {
    *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
         *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6[-0x31ffc5b3] = pcVar6[-0x31ffc5b3] + cVar10;
  *pcVar8 = *pcVar8;
  cVar3 = (char)unaff_RDI;
  cRam0000000002095d00 = cRam0000000002095d00 + cVar3;
  *unaff_RDI = *unaff_RDI + cVar3;
  if (*unaff_RDI != 0) {
    *unaff_RDI = *unaff_RDI + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[-0x31ffc5b3] = unaff_RDI[-0x31ffc5b3] + cVar10;
  *pcVar8 = *pcVar8;
  uVar5 = uVar5 + 0xe4050002;
  bVar1 = (byte)uVar5 | *(byte *)(ulonglong)uVar5;
  uVar4 = CONCAT31((int3)(uVar5 >> 8),bVar1);
  puVar7 = (uint *)(ulonglong)uVar4;
  *(byte *)puVar7 = (byte)*puVar7 + cVar2;
  pcVar8 = param_1 + -2;
  if (pcVar8 == (char *)0x0 || (byte)*puVar7 != 0) {
    *pcVar8 = *pcVar8 + (char)(uVar5 >> 8);
    *(byte *)puVar7 = (byte)*puVar7 + bVar1;
    *(byte *)((longlong)puVar7 + -0x41) = *(byte *)((longlong)puVar7 + -0x41) + bVar9;
    cRam00000000bf6effff = cRam00000000bf6effff + unaff_BPL;
    uVar4 = *puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + (byte)pcVar8;
    param_1 = param_1 + -3;
    if (param_1 == (char *)0x0 || (byte)*puVar7 != 0) {
      *param_1 = *param_1 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iRam00000000e269e187 = iRam00000000e269e187 + unaff_EBX + (uint)CARRY1((byte)uVar4,(byte)pcVar8)
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar7 = *puVar7 & uVar4;
  *(byte *)puVar7 = (byte)*puVar7 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

