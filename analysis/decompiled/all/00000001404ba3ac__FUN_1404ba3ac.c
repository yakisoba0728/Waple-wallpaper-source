// Function: FUN_1404ba3ac
// Addr: 1404ba3ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ba358) */

void FUN_1404ba3ac(int *param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  int unaff_ESI;
  
  puVar1 = (undefined1 *)(CONCAT44(in_register_00000004,in_EAX) + 0x208cab00);
  *puVar1 = *puVar1;
  bVar2 = *param_4;
  *param_4 = *param_4 + (byte)in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       (*(int *)CONCAT44(in_register_00000004,in_EAX) - (int)param_1) -
       (uint)CARRY1(bVar2,(byte)in_EAX);
  *(char *)param_1 = (char)*param_1 + unaff_BL;
  *param_1 = *param_1 + unaff_ESI;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

