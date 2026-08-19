// Function: FUN_1404ca800
// Addr: 1404ca800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca800(longlong param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined7 in_register_00000001;
  byte *unaff_RDI;
  
  bVar2 = bRam14000a2619000000;
  iRam000000014c3cb50f = iRam000000014c3cb50f + param_2;
  if (param_1 == 1 || iRam000000014c3cb50f == 0) {
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  }
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar2 & (byte)param_2) + 0x1000000);
  *pcVar1 = *pcVar1 + (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

