// Function: FUN_1404d3970
// Addr: 1404d3970
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d39d7) overlaps instruction at (ram,0x0001404d39d4)
    */

void FUN_1404d3970(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  char *pcVar4;
  int iVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined6 uVar10;
  byte unaff_BL;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  char *pcVar5;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar8 = (undefined1)param_2;
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  iVar6 = (int)param_1;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + bVar9;
  in_RAX[param_2] = in_RAX[param_2] + bVar9;
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  in_RAX[-0x4bffc4de] = in_RAX[-0x4bffc4de] + cVar2;
  in_RAX[unaff_RBP * 8 + 0x210049] = in_RAX[unaff_RBP * 8 + 0x210049] + cVar2;
  pcVar4 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX) * 2);
  *pcVar4 = *pcVar4 + bVar9;
  pcVar4 = (char *)func_0x0001406e39e3();
  *pcVar4 = *pcVar4 + (char)pcVar4;
  pcVar4 = (char *)func_0x0001486e39f3();
  cVar2 = (char)pcVar4 + *pcVar4;
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)pcVar4 >> 8),cVar2);
  (&stack0x00000000)[CONCAT62(uVar10,CONCAT11(bVar9,uVar8))] =
       (&stack0x00000000)[CONCAT62(uVar10,CONCAT11(bVar9,uVar8))] | bVar9;
  *(undefined1 *)(unaff_RDI * 2) = *(undefined1 *)(unaff_RDI * 2);
  cRam21004a2d00003f38 = cVar2;
  *(char *)CONCAT62(uVar10,CONCAT11(bVar9,uVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(bVar9,uVar8)) + cVar2;
  *pcVar5 = *pcVar5 + cVar2;
  if (*pcVar5 == '\0') {
    pcVar5 = (char *)(CONCAT62(uVar10,CONCAT11(bVar9,uVar8)) + 0x3f38);
    *pcVar5 = *pcVar5 + (char)((ulonglong)pcVar4 >> 8);
    piVar1 = (int *)(CONCAT62(uVar10,CONCAT11(bVar9,uVar8)) + CONCAT62(uVar10,CONCAT11(bVar9,uVar8))
                    );
    *piVar1 = *piVar1 - unaff_ESI;
  }
  else {
    pcVar5[-0x5dffc0cc] = pcVar5[-0x5dffc0cc] + cVar2;
    *pcVar5 = *pcVar5 + cVar2;
    uVar3 = (int)pcVar5 - 0x21004a;
    cRam01004a2d00003f38 = (char)uVar3;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cRam01004a2d00003f38;
    *(undefined1 *)(unaff_RDI * 2) = *(undefined1 *)(unaff_RDI * 2);
    *(int *)CONCAT62(uVar10,CONCAT11(bVar9,uVar8)) =
         *(int *)CONCAT62(uVar10,CONCAT11(bVar9,uVar8)) - iVar6;
    *(byte *)CONCAT44(uVar7,iVar6) = *(char *)CONCAT44(uVar7,iVar6) + unaff_BL;
  }
  bVar9 = *(byte *)CONCAT44(uVar7,iVar6);
  *(byte *)CONCAT44(uVar7,iVar6) = *(char *)CONCAT44(uVar7,iVar6) + unaff_BL;
  if (!CARRY1(bVar9,unaff_BL)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

