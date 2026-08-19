// Function: FUN_1404d6474
// Addr: 1404d6474
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6474(char param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  char *unaff_RDI;
  
  bVar2 = *param_4;
  *param_4 = *param_4 - 8;
  cVar3 = in_AL - cRam0000000084680037;
  *param_2 = *param_2 + unaff_BL;
  if (*param_2 != '\0') {
    *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar3 - (7 < bVar2)) + 0x3d);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

