// Function: FUN_1404cf460
// Addr: 1404cf460
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cf536) */

void FUN_1404cf460(byte *param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  longlong in_RAX;
  byte *unaff_RBX;
  undefined1 unaff_DIL;
  undefined7 unaff_00000039;
  bool in_ZF;
  
  if (in_ZF) {
    *param_1 = *param_1 + (char)in_RAX;
    *(byte *)CONCAT71(unaff_00000039,unaff_DIL) =
         *(char *)CONCAT71(unaff_00000039,unaff_DIL) + (byte)param_1;
    bVar1 = (byte)param_1 & 7;
    *unaff_RBX = *unaff_RBX >> bVar1 | *unaff_RBX << 8 - bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *param_1;
  *param_1 = *param_1 + param_3;
  *(char *)(in_RAX * 2) = (*(char *)(in_RAX * 2) - (char)in_RAX) - CARRY1(bVar1,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

