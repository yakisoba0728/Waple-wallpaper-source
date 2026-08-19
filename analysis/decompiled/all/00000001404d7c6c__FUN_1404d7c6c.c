// Function: FUN_1404d7c6c
// Addr: 1404d7c6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7c6c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  char cVar7;
  char cVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  longlong unaff_RDI;
  int *piVar9;
  char unaff_R12B;
  uint *puVar6;
  
  cVar7 = (char)param_1;
  uVar2 = *in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar4 = ((uint)in_RAX | 0xc40d0004) + 0x4540500;
  pcVar1 = (char *)(ulonglong)uVar4 + 0x7a;
  cVar8 = (char)((ulonglong)param_2 >> 8);
  *pcVar1 = *pcVar1 + cVar8;
  *(char *)(unaff_RDI + 0x7a) = *(char *)(unaff_RDI + 0x7a) + unaff_BH;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004d + unaff_RDI * 2)
  ;
  *pcVar1 = *pcVar1 + cVar7;
  cVar3 = (char)uVar4 + *(char *)(ulonglong)uVar4;
  uVar5 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) + cVar3,cVar3)) + 0x367a7000;
  puVar6 = (uint *)(ulonglong)uVar5;
  *(char *)(unaff_RDI + 0x7a) = *(char *)(unaff_RDI + 0x7a) + unaff_BH;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004d + unaff_RDI * 2)
  ;
  *pcVar1 = *pcVar1 + cVar7;
  uVar4 = *puVar6;
  cVar3 = (char)uVar5;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  if (!SCARRY1((char)uVar4,cVar3)) {
    *(char *)(unaff_RDI + 0x7a) = *(char *)(unaff_RDI + 0x7a) + unaff_BH;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1f01004d +
                     unaff_RDI * 2);
    *pcVar1 = *pcVar1 + cVar7;
    *puVar6 = *puVar6 | uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar9 = (int *)(ulonglong)
                  ((uint)unaff_RDI &
                  *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x61c80038));
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)puVar6 * 2) = *(char *)((longlong)puVar6 * 2) + cVar3;
  *(char *)((longlong)piVar9 + (longlong)puVar6) =
       *(char *)((longlong)piVar9 + (longlong)puVar6) + cVar8;
  pcVar1 = (char *)((ulonglong)(unaff_ESI | uVar2) + (longlong)puVar6);
  *pcVar1 = *pcVar1 + cVar8;
  *piVar9 = *piVar9 + CONCAT31((int3)(uVar5 >> 8),cVar3 + cVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

