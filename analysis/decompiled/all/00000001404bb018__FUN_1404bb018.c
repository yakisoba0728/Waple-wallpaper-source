// Function: FUN_1404bb018
// Addr: 1404bb018
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb018(uint *param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined7 in_register_00000001;
  uint unaff_ESP;
  
  cVar2 = cRam21004baecc00210b;
  *(char *)CONCAT71(in_register_00000001,cRam21004baecc00210b) =
       *(char *)CONCAT71(in_register_00000001,cRam21004baecc00210b) + cRam21004baecc00210b;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar2) + -0x3cffdef7);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 | unaff_ESP;
  *param_4 = *param_4 + cVar2 * '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

