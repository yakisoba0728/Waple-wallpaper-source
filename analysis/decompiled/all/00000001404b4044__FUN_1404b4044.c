// Function: FUN_1404b4044
// Addr: 1404b4044
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4044(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined8 in_RAX;
  int *piVar11;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar9;
  byte *pbVar10;
  
  bVar6 = (char)in_RAX - 0x3e;
  pbVar9 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6);
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + bVar6;
  bVar7 = *pbVar9;
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar6;
  if (!SCARRY1(bVar2,bVar6)) {
    bVar2 = *pbVar9;
    bVar3 = *pbVar9;
    *pbVar9 = (bVar3 - bVar6) - CARRY1(bVar7,bVar6);
    *pbVar9 = (*pbVar9 - bVar6) - (bVar2 < bVar6 || (byte)(bVar3 - bVar6) < CARRY1(bVar7,bVar6));
    uVar8 = (int)pbVar9 + 0x34050002;
    pbVar10 = (byte *)(ulonglong)uVar8;
    bVar7 = (byte)uVar8;
    *pbVar10 = *pbVar10 | bVar7;
    *pbVar10 = *pbVar10 - bVar7;
    *(char *)(unaff_RBP + 0x3f780018) = *(char *)(unaff_RBP + 0x3f780018) << 1;
    *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
    uVar8 = (int)pbVar9 + 0x980a0004;
    piVar11 = (int *)(ulonglong)uVar8;
    *piVar11 = *piVar11 + uVar8;
    pcVar1 = (char *)(unaff_RBP + -0x4a16ffe8);
    cVar4 = *pcVar1;
    *pcVar1 = *pcVar1 << 1;
    *(char *)piVar11 = ((char)*piVar11 - (char)uVar8) - (cVar4 < '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + param_1;
  bVar2 = *pbVar9;
  bVar3 = *pbVar9;
  *pbVar9 = bVar3 + bVar6 + CARRY1(bVar7,param_1);
  sysenter();
  uVar5 = TaskRegister();
  *(undefined2 *)unaff_RDI = uVar5;
  if (SCARRY1(bVar2,bVar6) == SCARRY1(bVar3 + bVar6,CARRY1(bVar7,param_1))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

