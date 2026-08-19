// Function: FUN_1404d5d0c
// Addr: 1404d5d0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5d0c(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint in_EAX;
  uint uVar6;
  byte bVar8;
  char cVar9;
  byte bVar10;
  int unaff_EBX;
  char *pcVar11;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  longlong in_FS_OFFSET;
  uint *puVar7;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  pcVar11 = (char *)(ulonglong)((uint)&stack0x00000000 & in_EAX);
  *(int *)(pcVar11 + (longlong)param_1) = *(int *)(pcVar11 + (longlong)param_1) - unaff_ESI;
  uVar6 = in_EAX | 0x5000a54 | *(uint *)(in_FS_OFFSET + (ulonglong)(in_EAX | 0x5000a54));
  puVar7 = (uint *)(ulonglong)uVar6;
  *(byte *)(puVar7 + -0x13f73ff2) = (byte)puVar7[-0x13f73ff2] + cVar9;
  pcVar1 = (char *)(unaff_RBP + (longlong)param_1 * 2);
  bVar10 = (byte)unaff_EBX;
  *pcVar1 = *pcVar1 - bVar10;
  *puVar7 = *puVar7 & uVar6;
  uVar4 = *puVar7;
  bVar5 = (byte)uVar6;
  *(byte *)puVar7 = (byte)*puVar7 + bVar5;
  *(byte *)(puVar7 + -0x13f73ff2) = (byte)puVar7[-0x13f73ff2] + cVar9 + CARRY1((byte)uVar4,bVar5);
  pbVar2 = (byte *)(unaff_RBP + (longlong)param_1 * 2);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 - bVar10;
  *unaff_RDI = (*unaff_RDI - unaff_EBX) - (uint)(bVar3 < bVar10);
  *(byte *)puVar7 = (byte)*puVar7 | bVar5;
  *(byte *)((longlong)unaff_RDI + (longlong)param_1) =
       *(byte *)((longlong)unaff_RDI + (longlong)param_1) + cVar9;
  uVar4 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + bVar8;
  if (!CARRY1((byte)uVar4,bVar8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar7 = (byte)*puVar7 + (char)((uint)unaff_EBX >> 8);
  *(byte *)puVar7 = (byte)*puVar7 + bVar5;
  bVar3 = *param_1;
  bVar5 = (byte)(uVar6 >> 8);
  *param_1 = *param_1 + bVar5;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + uVar6 + (uint)CARRY1(bVar3,bVar5);
  *param_1 = *param_1 + bVar8;
  if (*param_1 != 0) {
    *pcVar11 = *pcVar11 + (char)param_1;
    *puVar7 = *puVar7 | uVar6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

