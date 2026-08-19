// Function: FUN_1404b4ea0
// Addr: 1404b4ea0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4ea0(byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  uint *puVar4;
  byte unaff_BL;
  char unaff_BH;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *unaff_RDI;
  char in_CF;
  
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(-in_CF,(char)in_RAX));
  uVar3 = ((uint)puVar4 | *puVar4) + 0x834;
  *param_2 = *param_2 ^ unaff_BL;
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_1 >> 8);
  *param_2 = *param_2 ^ unaff_BL;
  *(char *)((ulonglong)uVar3 + 0x15) = *(char *)((ulonglong)uVar3 + 0x15) + (char)param_2;
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_2 = *param_2 ^ unaff_BL;
  pcVar1 = (char *)((ulonglong)
                    (CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + '\x04' + CARRY1(bVar2,unaff_SPL)) +
                    0x2f000a54) + 0x1a + unaff_RSI);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

