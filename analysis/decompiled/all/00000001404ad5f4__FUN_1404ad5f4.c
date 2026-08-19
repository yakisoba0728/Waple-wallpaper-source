// Function: FUN_1404ad5f4
// Addr: 1404ad5f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad613) overlaps instruction at (ram,0x0001404ad612)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad612) */

void FUN_1404ad5f4(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *pcVar3;
  undefined4 uVar2;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX + 1;
  bVar1 = (byte)in_EAX ^ 0xe6;
  *param_4 = *param_4 + bVar1;
  bVar1 = bVar1 | bRam0000000146cce00b;
  uVar2 = CONCAT31((int3)(in_EAX >> 8),bVar1);
  pcVar3 = (char *)(CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11((char)((ulonglong)param_1 >> 8) + param_2,(char)param_1)) + -1
                   );
  if (pcVar3 == (char *)0x0 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT44(in_register_00000004,uVar2) =
       *(byte *)CONCAT44(in_register_00000004,uVar2) ^ bVar1;
  *pcVar3 = *pcVar3 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

