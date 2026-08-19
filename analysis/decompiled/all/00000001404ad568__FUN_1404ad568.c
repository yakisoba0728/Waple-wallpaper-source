// Function: FUN_1404ad568
// Addr: 1404ad568
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad568(char *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *in_RAX;
  byte unaff_BL;
  
  uVar2 = (uint)(unaff_BL < (byte)((ulonglong)param_2 >> 8));
  uVar1 = *in_RAX;
  uVar3 = *in_RAX + (uint)in_RAX;
  *in_RAX = uVar3 + uVar2;
  *param_1 = *param_1 +
             (char)((ulonglong)in_RAX >> 8) + 'J' +
             (CARRY4(uVar1,(uint)in_RAX) || CARRY4(uVar3,uVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

