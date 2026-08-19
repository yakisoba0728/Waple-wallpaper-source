// Function: FUN_1404bb1a8
// Addr: 1404bb1a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb1a8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  char cVar3;
  char in_AL;
  byte bVar4;
  char cVar5;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char in_CF;
  
  cVar3 = -in_CF;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL));
  bVar4 = in_AL - 0x2cU |
          *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL - 0x2cU)));
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + (char)((ulonglong)param_2 >> 8);
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) |
           100) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)))
               | 100) + (CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4)) | 100);
  pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(cVar3,bVar4))) | 100) + param_2
                   );
  *pbVar1 = *pbVar1 | (byte)param_2;
  cVar5 = (bVar4 | 100) + 0x34;
  LocalDescriptorTableRegister
            (*(undefined2 *)
              (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar5))) +
              -0x5cffdeda));
  puVar2 = (uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar5)));
  *puVar2 = *puVar2 & CONCAT22(in_register_00000002,CONCAT11(cVar3,cVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

