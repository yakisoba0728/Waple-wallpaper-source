// Function: FUN_1404d809c
// Addr: 1404d809c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d810c) overlaps instruction at (ram,0x0001404d8106)
    */

void FUN_1404d809c(undefined8 param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar6;
  int *in_RAX;
  undefined7 uVar10;
  uint *puVar7;
  char *pcVar9;
  char cVar11;
  longlong unaff_RBX;
  char *unaff_RDI;
  char unaff_R12B;
  char in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint auStack_8 [2];
  uint uVar5;
  char *pcVar8;
  
  pcVar9 = unaff_RDI + 1;
  cVar2 = (char)in_RAX;
  *unaff_RDI = cVar2;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  cVar11 = (char)unaff_RBX;
  if (in_ZF || in_OF != in_SF) {
    uRam00000000980041de._0_1_ = (char)uRam00000000980041de + cVar3;
    *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + cVar2;
    uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
    puVar7 = (uint *)CONCAT71(uVar10,cVar2 + 'A' + *(char *)CONCAT71(uVar10,cVar2 + 'A') + cVar11);
    uVar6 = *puVar7;
    uVar5 = (uint)puVar7;
    uVar1 = *puVar7;
    uVar4 = uVar5 + *puVar7;
    in_RAX = (int *)(ulonglong)uVar4;
    *pcVar9 = (char)uVar4;
    pcVar9 = unaff_RDI + 2;
    if (uVar4 != 0 && SCARRY4(uVar5,uVar1) == (int)uVar4 < 0) {
      *(char *)(unaff_RBX + 0x4c) = (*(char *)(unaff_RBX + 0x4c) - cVar11) - CARRY4(uVar5,uVar6);
      uRam00000000980041de._0_1_ = (char)uRam00000000980041de + (char)(uVar4 >> 8);
    }
  }
  else {
    *(char *)(unaff_RBX + 0x4c) = (*(char *)(unaff_RBX + 0x4c) - cVar11) - in_CF;
    uRam00000000980041de._0_1_ = (char)uRam00000000980041de + cVar3;
  }
  uRam00000000980041de._0_1_ = (char)uRam00000000980041de + (char)((ulonglong)in_RAX >> 8);
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)((ulonglong)param_2 >> 8);
  cVar2 = (char)(pcVar9 + 1);
  *pcVar9 = (char)in_RAX;
  *in_RAX = *in_RAX + (int)param_2;
  uVar6 = (int)in_RAX + 0x3781000;
  pcVar8 = (char *)(ulonglong)uVar6;
  *param_2 = *param_2 + -0x22;
  auStack_8[0] = 0xc2040002;
  auStack_8[1] = 0xffffffff;
  *pcVar8 = *pcVar8 + (char)uVar6;
  *(uint *)((longlong)auStack_8 + (longlong)pcVar8) =
       *(uint *)((longlong)auStack_8 + (longlong)pcVar8) & 0x980041de;
  pcVar8[(longlong)(pcVar9 + 1) * 2] = pcVar8[(longlong)(pcVar9 + 1) * 2] + -0x22;
  uVar6 = (int)in_RAX + 0x9e01600;
  pcVar9 = (char *)(ulonglong)uVar6;
  cVar3 = (char)uVar6;
  pcVar9[-8] = pcVar9[-8] + cVar3;
  cRam00000001584dc2ee = cRam00000001584dc2ee + cVar2;
  uRam00000000980041de._0_1_ = (char)uRam00000000980041de + unaff_R12B;
  *(char *)((longlong)pcVar9 * 2) = *(char *)((longlong)pcVar9 * 2) + cVar3;
  pcVar9[5] = pcVar9[5] + auStack_8[0]._1_1_;
  *pcVar9 = *pcVar9 + cVar3;
  cRam00000001584dc306 = cRam00000001584dc306 + cVar2;
  uRam00000000980041de =
       CONCAT11(uRam00000000980041de._1_1_,(char)uRam00000000980041de + unaff_R12B);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

