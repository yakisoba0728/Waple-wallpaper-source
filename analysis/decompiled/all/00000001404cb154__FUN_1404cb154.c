// Function: FUN_1404cb154
// Addr: 1404cb154
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb154(char *param_1,undefined8 param_2)

{
  int *piVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  char cVar3;
  undefined6 uVar4;
  int unaff_ESI;
  char in_CF;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)param_2;
  *param_1 = *param_1 + in_AL + in_CF;
  cVar3 = *(char *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + cVar2;
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *piVar1 = *piVar1 + unaff_ESI;
  cVar3 = (char)((ulonglong)param_2 >> 8) + cVar3 +
          *(char *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

