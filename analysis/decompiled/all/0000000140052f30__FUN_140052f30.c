// Function: FUN_140052f30
// Addr: 140052f30
// Size: 47 bytes


void FUN_140052f30(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [40];
  
  puVar1 = (undefined4 *)FUN_140052f10(local_38,param_1);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  uVar2 = FUN_140052f60(local_28,&local_48);
                    /* WARNING: Subroutine does not return */
  FUN_140017300(uVar2);
}

