// Function: FUN_1404cd940
// Addr: 1404cd940
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd940(int *param_1,char param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESP;
  uint unaff_EBP;
  byte *unaff_RDI;
  byte in_CF;
  
  *param_1 = *param_1 + unaff_ESP + (uint)in_CF;
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 0xb);
  *puVar1 = *puVar1 & unaff_EBP;
  *(char *)param_1 = (char)*param_1 + (char)unaff_EBX;
  *param_1 = *param_1 + unaff_EBX;
  cRam000000014a2ce541 = cRam000000014a2ce541 + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x3128004c +
                   CONCAT44(unaff_0000001c,unaff_EBX) * 8);
  *pcVar2 = *pcVar2 + param_2 + *(char *)(CONCAT71(in_register_00000001,in_AL) + 0x50);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

