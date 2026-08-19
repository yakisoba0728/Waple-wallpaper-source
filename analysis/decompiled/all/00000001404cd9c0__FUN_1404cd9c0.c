// Function: FUN_1404cd9c0
// Addr: 1404cd9c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd9c0(char param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 in_AL;
  byte bVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong in_FS_OFFSET;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  bVar2 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  piVar1 = (int *)(in_FS_OFFSET +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))
                          ));
  *piVar1 = *piVar1 + CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)) + (uint)in_CF;
  GlobalDescriptorTableRegister(*param_2);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

