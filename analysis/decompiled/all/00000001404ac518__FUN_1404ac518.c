// Function: FUN_1404ac518
// Addr: 1404ac518
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac518(char param_1,char param_2)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  char in_CF;
  bool bVar2;
  
  cVar1 = (in_AL + -1) - in_CF;
  bVar2 = SCARRY1(cRam000000014a2ad111,param_1);
  cRam000000014a2ad111 = cRam000000014a2ad111 + param_1;
  if (!bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

