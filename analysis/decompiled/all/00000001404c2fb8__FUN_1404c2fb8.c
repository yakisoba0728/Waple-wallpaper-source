// Function: FUN_1404c2fb8
// Addr: 1404c2fb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2fb8(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  
  cVar3 = in(param_2);
  LOCK();
  *param_4 = *param_4 + unaff_SPL;
  UNLOCK();
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))));
  *pcVar1 = *pcVar1 + cVar3;
  cVar2 = in_AH * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,cVar3))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,cVar3)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar2,cVar3));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,cVar3))) + param_1);
  *pcVar1 = *pcVar1 + (char)((ushort)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

