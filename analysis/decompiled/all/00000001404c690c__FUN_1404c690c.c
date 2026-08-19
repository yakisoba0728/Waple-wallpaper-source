// Function: FUN_1404c690c
// Addr: 1404c690c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c690c(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char unaff_BH;
  char unaff_R12B;
  
  cVar2 = in_AL + 'h';
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar2) + 0x2c);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

