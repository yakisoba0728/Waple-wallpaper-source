// Function: FUN_1404bbe44
// Addr: 1404bbe44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbe44(undefined8 param_1,uint *param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  uint unaff_ESP;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  cVar2 = in_AH + cVar3;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | in_AL;
  cVar2 = cVar2 + in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) +
                   (longlong)param_2);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       << 2;
  *param_2 = *param_2 ^ unaff_ESP;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

