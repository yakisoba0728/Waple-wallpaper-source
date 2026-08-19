// Function: FUN_1404cde14
// Addr: 1404cde14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cde14(char *param_1,undefined8 param_2)

{
  uint uVar1;
  char *pcVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  char unaff_R12B;
  
  uVar3 = in_RAX & 0xfffffffffffffff2;
  *param_1 = *param_1 + unaff_R12B;
  pcVar2 = (char *)((uVar3 | 0xdd) * 2);
  *pcVar2 = *pcVar2 + (char)(uVar3 | 0xdd);
  uVar1 = (int)CONCAT71(CONCAT61((int6)(uVar3 >> 0x10),
                                 ((char)(uVar3 >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02'),
                        uRam50003bf1d8003bf1) + 0x21004a;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

