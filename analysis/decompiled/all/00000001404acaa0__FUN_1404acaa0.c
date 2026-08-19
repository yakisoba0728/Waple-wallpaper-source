// Function: FUN_1404acaa0
// Addr: 1404acaa0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acaa0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 in_AL;
  char in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char in_CF;
  
  cVar2 = in_AH * '\x02' + in_CF;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL));
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) |
           0xd4) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
               | 0xd4) + (CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)) | 0xd4);
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)(&stack0x00000000 + param_2 * 2) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

