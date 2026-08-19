// Function: FUN_1404a0a28
// Addr: 1404a0a28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0ad2) overlaps instruction at (ram,0x0001404a0acf)
    */

void FUN_1404a0a28(char *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 in_RAX;
  uint *puVar4;
  ulonglong uVar5;
  char cVar6;
  char unaff_BL;
  char cVar7;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  char unaff_retaddr;
  undefined7 unaff_retaddr_00;
  
  cVar6 = (char)param_2;
  cVar7 = unaff_BL + (char)((ulonglong)param_1 >> 8) + in_CF;
  *param_4 = *param_4;
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '\x04') + 0x5e000dc4;
  out(*unaff_RSI,(short)param_2);
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3;
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3;
  puVar4 = (uint *)(ulonglong)uVar3;
  *param_2 = *param_2 | (uint)param_1;
  *puVar4 = *puVar4 & uVar3;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
  puVar2 = (undefined4 *)CONCAT71(unaff_retaddr_00,unaff_retaddr + cVar6);
  out(*puVar2,(short)param_2);
  uVar3 = uVar3 + *puVar4 + *(int *)(ulonglong)(uVar3 + *puVar4);
  puVar4 = (uint *)(ulonglong)uVar3;
  *param_2 = *param_2 | (uint)param_1;
  *puVar4 = *puVar4 & uVar3;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11((char)(uVar3 >> 8) * '\x02' + cVar6,(byte)uVar3 | (byte)*puVar4)) +
          0xdc40000;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(0x6f,cVar7))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(0x6f,cVar7))] + cVar6;
  uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),uRam1000036f5e00036e);
  *(char *)(unaff_RDI + uVar5) = *(char *)(unaff_RDI + uVar5) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((longlong)puVar2 + uVar5 + 4);
  *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x6f,cVar7)) + uVar5);
  *pcVar1 = '\0';
  if (*pcVar1 == '\0') {
    *param_1 = *param_1 + '\b';
  }
  *(char *)(uVar5 + 0x21004a09) = *(char *)(uVar5 + 0x21004a09) + 'o';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

