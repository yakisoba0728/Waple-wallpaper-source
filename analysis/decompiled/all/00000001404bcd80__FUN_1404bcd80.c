// Function: FUN_1404bcd80
// Addr: 1404bcd80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404bcd5a) */

void FUN_1404bcd80(char param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  uint in_EAX;
  undefined4 uVar3;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar2 = (undefined3)(in_EAX >> 8);
  *param_4 = *param_4;
  *(char *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff00) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff00) + param_1;
  *(char *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff00) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffff00) + (char)param_2;
  uVar3 = CONCAT31(uVar2,0xf);
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + (char)param_2;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,CONCAT31(uVar2,0xff)) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

