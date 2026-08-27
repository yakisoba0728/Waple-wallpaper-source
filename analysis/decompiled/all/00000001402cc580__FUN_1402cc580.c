// Function: FUN_1402cc580
// Addr: 1402cc580
// Size: 126 bytes


undefined8 FUN_1402cc580(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1402db7dc(uVar2);
  uVar4 = FUN_1402cc69c(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                        *(undefined8 *)param_1[4],*(undefined8 *)*param_1,param_1[1]);
  FUN_1402db8a4(uVar3,uVar2,uVar1);
  return uVar4;
}

