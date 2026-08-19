// Function: FUN_1404a0a18
// Addr: 1404a0a18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0ad2) overlaps instruction at (ram,0x0001404a0acf)
    */

void FUN_1404a0a18(char *param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  char cVar9;
  char unaff_BL;
  char cVar10;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  undefined4 *unaff_retaddr;
  char cStackX_8;
  undefined7 uStackX_9;
  undefined1 auStackX_10 [24];
  
  cVar9 = (char)param_2;
  *(uint *)(auStackX_10 + (longlong)(param_1 + -0x10)) =
       (*(int *)(auStackX_10 + (longlong)(param_1 + -0x10)) - (int)&stack0x00000000) - (uint)in_CF;
  uVar3 = SUB82(param_2,0);
  out(*unaff_RSI,uVar3);
  uVar5 = in_EAX + 0xa0000b54U + *(int *)(ulonglong)(in_EAX + 0xa0000b54U);
  out(*unaff_retaddr,uVar3);
  iVar6 = uVar5 + *(uint *)(ulonglong)uVar5;
  cVar10 = unaff_BL + (char)((ulonglong)param_1 >> 8) + CARRY4(uVar5,*(uint *)(ulonglong)uVar5);
  bVar2 = *param_4;
  *param_4 = *param_4 + (byte)&cStackX_8;
  uVar5 = CONCAT31((int3)((uint)iVar6 >> 8),(char)iVar6 + '\x04' + CARRY1(bVar2,(byte)&cStackX_8)) +
          0x5e000dc4;
  out(unaff_retaddr[1],uVar3);
  uVar5 = uVar5 + *(int *)(ulonglong)uVar5;
  uVar5 = uVar5 + *(int *)(ulonglong)uVar5;
  puVar7 = (uint *)(ulonglong)uVar5;
  *param_2 = *param_2 | (uint)param_1;
  *puVar7 = *puVar7 & uVar5;
  *(char *)puVar7 = (char)*puVar7 + (char)uVar5;
  puVar4 = (undefined4 *)CONCAT71(uStackX_9,cStackX_8 + cVar9);
  out(*puVar4,uVar3);
  uVar5 = uVar5 + *puVar7 + *(int *)(ulonglong)(uVar5 + *puVar7);
  puVar7 = (uint *)(ulonglong)uVar5;
  *param_2 = *param_2 | (uint)param_1;
  *puVar7 = *puVar7 & uVar5;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                   CONCAT11((char)(uVar5 >> 8) * '\x02' + cVar9,(byte)uVar5 | (byte)*puVar7)) +
          0xdc40000;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(0x6f,cVar10))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(0x6f,cVar10))] + cVar9;
  uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),uRam1000036f5e00036e);
  *(char *)(unaff_RDI + uVar8) = *(char *)(unaff_RDI + uVar8) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((longlong)puVar4 + uVar8 + 4);
  *pcVar1 = *pcVar1 + (char)(uVar5 >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x6f,cVar10)) + uVar8);
  *pcVar1 = '\0';
  if (*pcVar1 == '\0') {
    *param_1 = *param_1 + (char)auStackX_10;
  }
  *(char *)(uVar8 + 0x21004a09) = *(char *)(uVar8 + 0x21004a09) + 'o';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

