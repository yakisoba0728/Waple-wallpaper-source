// Function: FUN_1404c8dd8
// Addr: 1404c8dd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8e4d) overlaps instruction at (ram,0x0001404c8e4c)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c8e4b) */
/* WARNING: Removing unreachable block (ram,0x0001404c8e80) */

void FUN_1404c8dd8(char *param_1,undefined2 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint *in_RAX;
  undefined7 uVar8;
  uint *puVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  char cVar9;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  undefined1 auStack_8 [8];
  byte *pbVar7;
  
  uVar5 = (uint)in_RAX;
  uRam0000000134518de0 = uRam0000000134518de0 & uVar5;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  out(param_2,uVar5);
  out(*unaff_RSI,param_2);
  *in_RAX = *in_RAX ^ uVar5;
  puVar6 = (uint *)CONCAT71(uVar8,*(undefined1 *)
                                   (CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                                   ((ulonglong)in_RAX & 0xff)));
  out(*(undefined4 *)(unaff_RSI + 1),param_2);
  *puVar6 = *puVar6 ^ (uint)puVar6;
  bVar1 = in(0x8c);
  puVar6 = (uint *)CONCAT71(uVar8,bVar1);
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)puVar6 = (char)*puVar6 + bVar1;
  cVar9 = unaff_BH + (char)((ulonglong)param_1 >> 8);
  out(unaff_RSI[5],param_2);
  *puVar6 = *puVar6 ^ (uint)puVar6;
  puVar6 = (uint *)CONCAT71(uVar8,*(undefined1 *)
                                   (CONCAT62(unaff_0000001a,CONCAT11(cVar9,unaff_BL)) +
                                   (ulonglong)bVar1));
  out(*(undefined4 *)(unaff_RSI + 6),param_2);
  *puVar6 = *puVar6 ^ (uint)puVar6;
  cVar2 = in(0x8c);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT71(uVar8,cVar2) = *(char *)CONCAT71(uVar8,cVar2) + cVar2;
  cVar2 = cVar2 + (char)param_2;
  puVar6 = (uint *)CONCAT71(uVar8,cVar2);
  out(unaff_RSI[10],param_2);
  uVar5 = (uint)puVar6;
  *puVar6 = *puVar6 ^ uVar5;
  out(param_2,uVar5);
  out(unaff_RSI[0xb],param_2);
  *puVar6 = *puVar6 ^ uVar5;
  iVar4 = (int)CONCAT71(uVar8,cVar2 + (char)*puVar6);
  if (SCARRY4(iVar4,-0x6ffff9cc)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(cVar9,cVar9)) {
    (&stack0x00000043)[unaff_RBP * 8] = (&stack0x00000043)[unaff_RBP * 8] + (char)param_1;
    *param_1 = *param_1 + (char)(iVar4 + -0x6ffff9cc);
    uVar5 = iVar4 + 0x5bd30631;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
    bVar3 = (char)uVar5 + 2;
    pbVar7 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar3);
    bVar1 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar3;
    *(uint *)(unaff_RSI + 0xc) =
         (*(int *)(unaff_RSI + 0xc) - (int)auStack_8) - (uint)CARRY1(bVar1,bVar3);
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + (char)param_1;
  *param_1 = *param_1 + (char)((uint)(iVar4 + -0x6ffff9cc) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

