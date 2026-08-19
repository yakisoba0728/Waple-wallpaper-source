// Function: FUN_1404d267c
// Addr: 1404d267c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d267c(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  char *in_RAX;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined7 uVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  *unaff_RDI = *unaff_RSI;
  *(char *)(unaff_RBP + 0x21004d) = *(char *)(unaff_RBP + 0x21004d) + (char)param_2 * '\x02';
  *in_RAX = *in_RAX + (char)in_RAX;
  unaff_RDI[1] = unaff_RSI[1];
  cVar3 = (char)param_2 * '\x04';
  iVar5 = CONCAT31((int3)((ulonglong)param_1 >> 8),0x3e);
  *(char *)(unaff_RBP + 0x4a01004d) = *(char *)(unaff_RBP + 0x4a01004d) + cVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  piVar4 = (int *)((ulonglong)((int)in_RAX + 0x744a00) ^ 2);
  pcVar2 = (char *)(CONCAT71(uVar7,cVar3) + (longlong)piVar4);
  *pcVar2 = *pcVar2 + (char)piVar4;
  *(char *)piVar4 = (char)*piVar4 + (char)piVar4;
  *(int *)CONCAT44(uVar6,iVar5) = *(int *)CONCAT44(uVar6,iVar5) + iVar5;
  *piVar4 = *piVar4 + (uint)piVar4;
  puVar1 = (uint *)(CONCAT71(uVar7,cVar3) + 0xd010000);
  *puVar1 = *puVar1 | (uint)piVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

