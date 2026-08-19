// Function: FUN_1404d01a4
// Addr: 1404d01a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d01fa) overlaps instruction at (ram,0x0001404d01f9)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d0209) */

void FUN_1404d01a4(longlong param_1,uint param_2,undefined8 param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  int *piVar4;
  char *pcVar5;
  undefined7 uVar7;
  char cVar8;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RBP;
  char *unaff_RSI;
  undefined2 *unaff_RDI;
  char unaff_retaddr;
  uint *puVar6;
  
  pcVar5 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   -0x5fffc90e);
  *pcVar5 = *pcVar5 + (char)param_1;
  out((short)param_2,0xf1);
  *param_4 = *param_4 + -0xf;
  piVar4 = (int *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),0xf1) ^ 6);
  pcVar5 = (char *)((longlong)piVar4 + (longlong)unaff_RDI * 2);
  *pcVar5 = *pcVar5 + (char)(param_2 >> 8);
  uVar3 = (int)piVar4 + *piVar4;
  *(char *)((ulonglong)uVar3 + 4) =
       *(char *)((ulonglong)uVar3 + 4) - (char)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar3;
  pcVar5 = (char *)(ulonglong)param_2;
  cVar8 = (char)(uVar3 >> 8) + *pcVar5;
  *(uint *)(pcVar5 + param_1) =
       *(uint *)(pcVar5 + param_1) & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  LocalDescriptorTableRegister(*unaff_RDI);
  if ((char)(unaff_retaddr + unaff_BL) == '\0') {
    bVar1 = param_1 != 1;
    param_1 = 0;
    if (bVar1) {
      *unaff_RSI = (char)param_2;
      goto code_r0x0001404d020f;
    }
  }
  else {
    *unaff_RSI = *unaff_RSI + (char)param_1;
    pcVar5 = (char *)(ulonglong)(param_2 | 0xc540500);
    pcVar5[-0x1e] = pcVar5[-0x1e] + (char)uVar3;
  }
  uVar7 = (undefined7)((ulonglong)pcVar5 >> 8);
  cVar2 = (char)pcVar5 + (char)((ulonglong)pcVar5 >> 8);
  puVar6 = (uint *)CONCAT71(uVar7,cVar2);
  *unaff_RBP = *unaff_RBP + (char)param_1;
  *puVar6 = *puVar6 & (uint)puVar6;
  *(char *)puVar6 = (char)*puVar6 + cVar2;
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBP = *unaff_RBP;
  piVar4 = (int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *piVar4 = *piVar4 + (uint)puVar6;
  if (-1 < *piVar4) {
    *(char *)puVar6 = (char)*puVar6 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (uint)CONCAT71(uVar7,cVar2) | 0x7f009a2;
  pcVar5 = (char *)(ulonglong)uVar3;
  if (uVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar8 = cVar8 + *pcVar5;
  *pcVar5 = *pcVar5 + (char)uVar3;
  *(int *)(pcVar5 + 0x12) = *(int *)(pcVar5 + 0x12) + (int)unaff_RSI;
code_r0x0001404d020f:
  pcVar5[-0x58] = pcVar5[-0x58] + cVar8;
  pcVar5 = (char *)((ulonglong)((int)(short)pcVar5 + 0x6885300) + (longlong)unaff_RDI * 2);
  *pcVar5 = *pcVar5 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

