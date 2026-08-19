// Function: FUN_1404b5efc
// Addr: 1404b5efc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5efc(void)

{
  char *pcVar1;
  char cVar2;
  undefined7 in_register_00000001;
  
  cVar2 = cRam21004b5e0c001b3f;
  *(char *)CONCAT71(in_register_00000001,cRam21004b5e0c001b3f) =
       *(char *)CONCAT71(in_register_00000001,cRam21004b5e0c001b3f) + cRam21004b5e0c001b3f;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar2) + -0x5fffe4c1);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

