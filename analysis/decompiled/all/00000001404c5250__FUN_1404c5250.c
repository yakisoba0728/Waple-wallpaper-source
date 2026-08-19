// Function: FUN_1404c5250
// Addr: 1404c5250
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5250(char *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 in_RAX;
  char unaff_BL;
  longlong unaff_RBP;
  char *pcVar3;
  
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRamf200000001002edc) + 0xd202d100;
  pcVar3 = (char *)(ulonglong)uVar2;
  *(char *)(unaff_RBP + 0x37) = *(char *)(unaff_RBP + 0x37) + (char)param_1;
  cVar1 = (char)uVar2;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

