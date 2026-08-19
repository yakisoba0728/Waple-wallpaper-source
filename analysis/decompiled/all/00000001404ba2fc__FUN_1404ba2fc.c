// Function: FUN_1404ba2fc
// Addr: 1404ba2fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ba296) */

void FUN_1404ba2fc(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char cVar3;
  undefined7 in_register_00000001;
  char unaff_BL;
  char unaff_SPL;
  char *unaff_RSI;
  bool in_OF;
  
  if (!in_OF) {
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(byte *)CONCAT71(in_register_00000001,in_AL) & in_AL;
    bVar2 = in_AL + 0xa2;
    *param_4 = *param_4 + unaff_SPL;
    *(byte *)CONCAT71(in_register_00000001,bVar2) =
         *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
    pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar2) + param_1 * 4);
    *pcVar1 = *pcVar1 + unaff_BL;
    *(byte *)CONCAT71(in_register_00000001,bVar2) =
         *(byte *)CONCAT71(in_register_00000001,bVar2) & bVar2;
    *(byte *)CONCAT71(in_register_00000001,bVar2) =
         *(byte *)CONCAT71(in_register_00000001,bVar2) & bVar2;
    cVar3 = in_AL + 0x44;
    *param_4 = *param_4 + unaff_SPL;
    *unaff_RSI = *unaff_RSI + cVar3;
    *(char *)CONCAT71(in_register_00000001,cVar3) =
         *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
    cVar3 = in(0xe);
    *(char *)CONCAT71(in_register_00000001,cVar3) =
         *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

