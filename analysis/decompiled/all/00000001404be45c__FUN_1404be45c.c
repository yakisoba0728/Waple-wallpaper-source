// Function: FUN_1404be45c
// Addr: 1404be45c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be45c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  char in_AL;
  byte bVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char in_CF;
  
  cVar2 = -in_CF;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL));
  bVar3 = in_AL - 0x2cU |
          *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL - 0x2cU)));
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + (char)((ulonglong)param_2 >> 8);
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3))) |
           100) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3)))
               | 100) + (CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3)) | 100);
  pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3))) | 100) + param_2
                   );
  *pbVar1 = *pbVar1 | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

