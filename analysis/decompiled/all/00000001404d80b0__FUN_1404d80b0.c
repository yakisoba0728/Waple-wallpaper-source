// Function: FUN_1404d80b0
// Addr: 1404d80b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d810c) overlaps instruction at (ram,0x0001404d8106)
    */

void FUN_1404d80b0(undefined8 param_1,char *param_2)

{
  uint uVar1;
  char cVar3;
  uint uVar4;
  char cVar9;
  undefined8 in_RAX;
  uint *puVar6;
  char *pcVar8;
  longlong unaff_RBX;
  char *unaff_RDI;
  char unaff_R12B;
  uint auStack_8 [2];
  uint uVar2;
  uint uVar5;
  int *piVar7;
  
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)unaff_RBX);
  uVar1 = *puVar6;
  uVar5 = (uint)puVar6;
  uVar2 = *puVar6;
  uVar4 = uVar5 + *puVar6;
  piVar7 = (int *)(ulonglong)uVar4;
  cVar3 = (char)uVar4;
  *unaff_RDI = cVar3;
  cVar9 = (char)(uVar4 >> 8);
  if (uVar4 != 0 && SCARRY4(uVar5,uVar2) == (int)uVar4 < 0) {
    *(char *)(unaff_RBX + 0x4c) =
         (*(char *)(unaff_RBX + 0x4c) - (char)unaff_RBX) - CARRY4(uVar5,uVar1);
    uRam00000000980041de = CONCAT31(uRam00000000980041de._1_3_,(char)uRam00000000980041de + cVar9);
  }
  uRam00000000980041de._0_1_ = (char)uRam00000000980041de + cVar9;
  *(char *)piVar7 = (char)*piVar7 + cVar3;
  *(char *)piVar7 = (char)*piVar7 + (char)((ulonglong)param_2 >> 8);
  cVar9 = (char)(unaff_RDI + 2);
  unaff_RDI[1] = cVar3;
  *piVar7 = *piVar7 + (int)param_2;
  pcVar8 = (char *)(ulonglong)(uVar4 + 0x3781000);
  *param_2 = *param_2 + -0x22;
  auStack_8[0] = 0xc2040002;
  auStack_8[1] = 0xffffffff;
  *pcVar8 = *pcVar8 + (char)(uVar4 + 0x3781000);
  *(uint *)((longlong)auStack_8 + (longlong)pcVar8) =
       *(uint *)((longlong)auStack_8 + (longlong)pcVar8) & 0x980041de;
  pcVar8[(longlong)(unaff_RDI + 2) * 2] = pcVar8[(longlong)(unaff_RDI + 2) * 2] + -0x22;
  pcVar8 = (char *)(ulonglong)(uVar4 + 0x9e01600);
  cVar3 = (char)(uVar4 + 0x9e01600);
  pcVar8[-8] = pcVar8[-8] + cVar3;
  cRam00000001584dc2ee = cRam00000001584dc2ee + cVar9;
  uRam00000000980041de._0_1_ = (char)uRam00000000980041de + unaff_R12B;
  *(char *)((longlong)pcVar8 * 2) = *(char *)((longlong)pcVar8 * 2) + cVar3;
  pcVar8[5] = pcVar8[5] + auStack_8[0]._1_1_;
  *pcVar8 = *pcVar8 + cVar3;
  cRam00000001584dc306 = cRam00000001584dc306 + cVar9;
  uRam00000000980041de =
       CONCAT31(uRam00000000980041de._1_3_,(char)uRam00000000980041de + unaff_R12B);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

