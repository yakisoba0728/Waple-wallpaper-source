// Function: FUN_1404d0164
// Addr: 1404d0164
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d01fa) overlaps instruction at (ram,0x0001404d01f9)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d0209) */

void FUN_1404d0164(longlong param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_RAX;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  undefined7 uVar9;
  char cVar10;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RBP;
  char *pcVar11;
  undefined2 *unaff_RDI;
  char unaff_retaddr;
  uint *puVar8;
  
  uRam000000012452016c = uRam000000012452016c & (uint)in_RAX;
  lVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),0xf1);
  pcVar7 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   -0x5fffc90e);
  cVar2 = (char)param_1;
  *pcVar7 = *pcVar7 + cVar2;
  out((short)param_2,0xf1);
  *param_4 = *param_4;
  puVar8 = (uint *)(lVar5 * 2);
  uVar4 = *puVar8;
  uVar3 = (uint)lVar5;
  *puVar8 = *puVar8 + uVar3;
  *(int *)(param_2 + param_1) =
       *(int *)(param_2 + param_1) + (int)&stack0x00000000 + (uint)CARRY4(uVar4,uVar3);
  uVar3 = uVar3 + 0x8b000bc4;
  puVar8 = (uint *)(ulonglong)uVar3;
  cVar10 = (char)(uVar3 >> 8);
  *(char *)(param_2 - 0x6bffc90e) = *(char *)(param_2 - 0x6bffc90e) + cVar10;
  *unaff_RBP = *unaff_RBP + cVar2;
  *puVar8 = *puVar8 & uVar3;
  *(char *)puVar8 = (char)*puVar8 + (char)uVar3;
  pcVar11 = (char *)(param_2 & 0xffffffff);
  *(char *)(param_2 - 0x6bffc90e) = *(char *)(param_2 - 0x6bffc90e) + cVar10;
  *unaff_RBP = *unaff_RBP + cVar2;
  *puVar8 = *puVar8 & uVar3;
  *(char *)puVar8 = (char)*puVar8 + (char)uVar3;
  pcVar7 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   -0x5fffc90e);
  *pcVar7 = *pcVar7 + cVar2;
  out((short)param_2,0xf1);
  *param_4 = *param_4 + -0xf;
  piVar6 = (int *)(CONCAT71((uint7)(uint3)(uVar3 >> 8),0xf1) ^ 6);
  pcVar7 = (char *)((longlong)piVar6 + (longlong)unaff_RDI * 2);
  *pcVar7 = *pcVar7 + (char)(param_2 >> 8);
  uVar4 = (int)piVar6 + *piVar6;
  *(char *)((ulonglong)uVar4 + 4) =
       *(char *)((ulonglong)uVar4 + 4) - (char)((ulonglong)param_1 >> 8);
  *pcVar11 = *pcVar11 + (char)uVar4;
  pcVar7 = (char *)(param_2 & 0xffffffff);
  cVar10 = (char)(uVar4 >> 8) + *pcVar7;
  *(uint *)(pcVar7 + param_1) =
       *(uint *)(pcVar7 + param_1) & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  LocalDescriptorTableRegister(*unaff_RDI);
  if ((char)(unaff_retaddr + unaff_BL) == '\0') {
    bVar1 = param_1 != 1;
    param_1 = 0;
    if (bVar1) {
      *pcVar11 = (char)pcVar7;
      goto code_r0x0001404d020f;
    }
  }
  else {
    *pcVar11 = *pcVar11 + cVar2;
    pcVar7 = (char *)(ulonglong)((uint)param_2 | 0xc540500);
    pcVar7[-0x1e] = pcVar7[-0x1e] + (char)uVar4;
  }
  uVar9 = (undefined7)((ulonglong)pcVar7 >> 8);
  cVar2 = (char)pcVar7 + (char)((ulonglong)pcVar7 >> 8);
  puVar8 = (uint *)CONCAT71(uVar9,cVar2);
  *unaff_RBP = *unaff_RBP + (char)param_1;
  *puVar8 = *puVar8 & (uint)puVar8;
  *(char *)puVar8 = (char)*puVar8 + cVar2;
  if (param_1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBP = *unaff_RBP;
  piVar6 = (int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *piVar6 = *piVar6 + (uint)puVar8;
  if (-1 < *piVar6) {
    *(char *)puVar8 = (char)*puVar8 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)CONCAT71(uVar9,cVar2) | 0x7f009a2;
  pcVar7 = (char *)(ulonglong)uVar4;
  if (uVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar10 = cVar10 + *pcVar7;
  *pcVar7 = *pcVar7 + (char)uVar4;
  *(uint *)(pcVar7 + 0x12) = *(int *)(pcVar7 + 0x12) + (uint)param_2;
code_r0x0001404d020f:
  pcVar7[-0x58] = pcVar7[-0x58] + cVar10;
  pcVar7 = (char *)((ulonglong)((int)(short)pcVar7 + 0x6885300) + (longlong)unaff_RDI * 2);
  *pcVar7 = *pcVar7 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

