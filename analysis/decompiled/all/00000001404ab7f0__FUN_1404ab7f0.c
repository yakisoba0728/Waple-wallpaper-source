// Function: FUN_1404ab7f0
// Addr: 1404ab7f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab85e) overlaps instruction at (ram,0x0001404ab85d)
    */

void FUN_1404ab7f0(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  undefined1 *puVar1;
  uint3 uVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char cVar8;
  char *in_RAX;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  char unaff_BL;
  char unaff_SPL;
  longlong unaff_RSI;
  uint *unaff_RDI;
  char *pcVar7;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  uVar10 = (undefined4)((ulonglong)param_1 >> 0x20);
  cVar4 = (char)in_RAX;
  out(0x49,cVar4);
  cVar8 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar8;
  *in_RAX = *in_RAX + cVar4;
  *unaff_RDI = *unaff_RDI ^ (uint)param_1;
  cRam00000001a44ac733 = cRam00000001a44ac733 + unaff_BL;
  out(0x49,cVar4 + cVar11);
  *param_1 = *param_1 + cVar8;
  uVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4 + cVar11) + 0x68050002;
  cVar4 = (char)uVar5 + *(char *)(ulonglong)uVar5;
  uVar6 = CONCAT31((int3)(uVar5 >> 8),cVar4);
  pcVar7 = (char *)(ulonglong)uVar6;
  *param_2 = *param_2 ^ 0xf;
  param_2[0x64000f32] = param_2[0x64000f32] + cVar11;
  out(0x49,cVar4);
  cVar8 = (char)(uVar5 >> 8);
  *param_1 = *param_1 + cVar8;
  *pcVar7 = *pcVar7 + cVar4;
  pcVar7[-0x4dfff0ce] = pcVar7[-0x4dfff0ce] + cVar4;
  uVar9 = CONCAT31((int3)((ulonglong)param_1 >> 8),(byte)param_1 ^ (byte)*unaff_RDI);
  *(char *)(unaff_RSI + 0x49) = *(char *)(unaff_RSI + 0x49) + cVar8;
  *(char *)CONCAT44(uVar10,uVar9) = *(char *)CONCAT44(uVar10,uVar9) + cVar8;
  uVar6 = uVar6 + 0x74050002;
  uVar2 = (uint3)(uVar6 >> 8) | (uint3)((uint)*(undefined4 *)(ulonglong)uVar6 >> 8);
  puVar1 = (undefined1 *)((longlong)unaff_RDI + CONCAT44(uVar10,uVar9));
  *puVar1 = *puVar1;
  uVar3 = (undefined2)(uVar2 >> 8);
  cVar8 = (char)uVar2 + cVar11;
  cVar4 = in(0x49);
  pcVar7 = (char *)(ulonglong)CONCAT31(CONCAT21(uVar3,cVar8),cVar4);
  *(char *)CONCAT44(uVar10,uVar9) = *(char *)CONCAT44(uVar10,uVar9) + cVar8;
  *pcVar7 = *pcVar7 + cVar4;
  pcVar7[-0x53fff0cc] = pcVar7[-0x53fff0cc] + cVar4;
  cVar8 = cVar8 + cVar11;
  cVar4 = in(0x49);
  pcVar7 = (char *)(ulonglong)CONCAT31(CONCAT21(uVar3,cVar8),cVar4);
  *(char *)CONCAT44(uVar10,uVar9) = *(char *)CONCAT44(uVar10,uVar9) + cVar8;
  *param_2 = *param_2 + cVar4;
  *pcVar7 = *pcVar7 + cVar4;
  if (*pcVar7 == '\0') {
    *param_4 = *param_4 + unaff_SPL;
  }
  else {
    pcVar7[-0x53fff0cc] = pcVar7[-0x53fff0cc] + cVar4;
    in(0x49);
    *(char *)CONCAT44(uVar10,uVar9) = *(char *)CONCAT44(uVar10,uVar9) + cVar8 + cVar11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

