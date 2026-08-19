// Function: FUN_1404b48e0
// Addr: 1404b48e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b48e0(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte unaff_BL;
  uint *puVar6;
  
  uVar3 = in_EAX + 0xf3000864;
  puVar5 = (uint *)(ulonglong)uVar3;
  *puVar5 = *puVar5 & uVar3;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar3;
  *puVar5 = (*puVar5 - uVar3) - (uint)CARRY1(unaff_BL,(byte)(param_1 >> 8));
  while( true ) {
    uVar4 = (uint)puVar5 + 0x60000a34;
    puVar6 = (uint *)(ulonglong)uVar4;
    out((short)param_2,(char)uVar4);
    uVar2 = (uint)(0x9ffff5cb < (uint)puVar5);
    uVar3 = *puVar6;
    uVar1 = *puVar6;
    *puVar6 = (uVar1 - uVar4) - uVar2;
    if ((int)*puVar6 < 0) break;
    *param_2 = *param_2 & param_1;
    puVar5 = (uint *)(ulonglong)uVar4;
  }
  *puVar6 = (*puVar6 - uVar4) - (uint)(uVar3 < uVar4 || uVar1 - uVar4 < uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

