// Function: FUN_1404ca110
// Addr: 1404ca110
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca110(char param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte bVar1;
  undefined6 uVar2;
  longlong unaff_RDI;
  
  uVar2 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar1 = (byte)((ulonglong)param_2 >> 8) |
          *(byte *)(unaff_RDI + CONCAT71(in_register_00000001,in_AL));
  *(char *)CONCAT62(uVar2,CONCAT11(bVar1,(char)param_2)) =
       *(char *)CONCAT62(uVar2,CONCAT11(bVar1,(char)param_2)) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

