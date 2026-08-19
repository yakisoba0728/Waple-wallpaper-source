// Function: FUN_1404bcd34
// Addr: 1404bcd34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcd34(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  byte bVar8;
  undefined8 in_RAX;
  uint *puVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *puVar9;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  byte in_R10B;
  byte *unaff_R14;
  bool bVar10;
  undefined1 auStack_4bcb [19403];
  ulonglong uVar7;
  
  bVar4 = (byte)in_RAX;
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  uVar7 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar8 + bVar4,bVar4));
  puVar6 = (uint *)(uVar7 * 2);
  uVar5 = (uint)CARRY1(bVar8,bVar4);
  uVar2 = *puVar6 - (uint)uVar7;
  bVar10 = *puVar6 < (uint)uVar7 || uVar2 < uVar5;
  *puVar6 = uVar2 - uVar5;
  if (*puVar6 != 0) {
    pcVar3 = (code *)swi(0xfc);
    puVar6 = (uint *)(*pcVar3)();
    uVar5 = (uint)puVar6 & *puVar6;
    uVar7 = (ulonglong)uVar5;
    puVar9 = auStack_4bcb;
    register0x00000020 = (BADSPACEBASE *)auStack_4bcb;
    *(int *)(unaff_RSI + uVar7) = *(int *)(unaff_RSI + uVar7) + (int)puVar9;
    *(char *)(param_1 + uVar7) = *(char *)(param_1 + uVar7) + (char)(uVar5 >> 8);
    bVar10 = CARRY1(*unaff_R14,in_R10B);
    *unaff_R14 = *unaff_R14 + in_R10B;
  }
  pbVar1 = (byte *)(uVar7 + unaff_RSI * 2);
  *pbVar1 = *pbVar1 << 1 | bVar10;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0xffffffffe4220026;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

