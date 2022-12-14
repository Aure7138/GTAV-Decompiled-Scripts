#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	struct<3> Local_80 = { 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	bool bLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_100 = { 0, 0, 0 } ;
	char[] cLocal_103[8] = 0;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	var uLocal_121 = 0;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	bool bLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	struct<3> Local_145 = { 0, 0, 0 } ;
	int iLocal_148 = 0;
	bool bLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	bool bLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	bool bLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	float fLocal_165 = 0f;
	struct<3> Local_166 = { 0, 0, 0 } ;
	struct<3> Local_169 = { 0, 0, 0 } ;
	struct<3> Local_172 = { 0, 0, 0 } ;
	struct<3> Local_175 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_184 = { 0, 0, 0 } ;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 16;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	char[] cLocal_359[8] = 0;
	char[] cLocal_360[8] = 0;
	char[] cLocal_361[8] = 0;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char* sLocal_367 = NULL;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	char* sLocal_370 = NULL;
	struct<3> Local_371 = { 0, 0, 0 } ;
	struct<3> Local_374 = { 0, 0, 0 } ;
	char[] cLocal_377[8] = 0;
	char[] cLocal_378[8] = 0;
	int iLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = -1;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 1000;
	var uLocal_390 = 1000;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 15;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 1;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	struct<3> Local_670 = { 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_91 = { -131.052f, -1627f, 31.1755f };
	Local_94 = { 287.888f, -284.603f, 52.967f };
	Local_97 = { -319.66f, -832.28f, 31.61f };
	Local_100 = { 31f, -1019f, 28.5f };
	sLocal_120 = "";
	cLocal_359 = "RANDOM@MUGGING3";
	cLocal_360 = "pickup_object";
	cLocal_377 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_379 = -1;
	if (unk_0x55EEDBBFDC6E810F(11))
	{
		if (iLocal_48 == 5 || iLocal_48 == 12)
		{
			func_296(25, bLocal_90);
			func_278();
		}
		else
		{
			func_278();
		}
	}
	Local_122 = { ScriptParam_0.f_1[0 /*3*/] };
	func_277(&uLocal_393, 3);
	func_276();
	if ((bLocal_90 == 1 && func_275(55)) && !func_274(55))
	{
		unk_0x675D9C12C73D3DE7();
	}
	if (func_233(Local_122, 25, bLocal_90, 0, 0))
	{
		func_230(-1);
	}
	else
	{
		unk_0x675D9C12C73D3DE7();
	}
	bVar0 = false;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_227(&uLocal_393);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x6352F03F31CA0713(unk_0x93E99A2DBCBA9CFA());
		}
		func_226(uLocal_65, &uLocal_392);
		if (unk_0xCBE2EC2868A6C438() || bLocal_149)
		{
			switch (iLocal_46)
			{
				case 0:
					if (func_212())
					{
						unk_0x8234DA302DC655DC(0);
						unk_0x10DFA2EC4C030EB3(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, 0, 0, 0);
						iLocal_156 = 1;
						iLocal_46 = 1;
					}
					else if (func_211())
					{
						func_278();
					}
					break;
				
				case 1:
					if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
					{
						if (iLocal_141 == 0)
						{
							iLocal_141 = unk_0x29CDE2F9C4D4CAF2(101, Local_122, 0f);
						}
						unk_0x6352F03F31CA0713(unk_0x93E99A2DBCBA9CFA());
						switch (iLocal_48)
						{
							case 1:
								func_203();
								break;
							
							case 2:
								unk_0x90B96B32812DC5B1("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_49)
								{
									case 0:
										unk_0x90B96B32812DC5B1("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (unk_0x66599E73DBA5A850(iLocal_63) || unk_0x7559C38E6535AB89(iLocal_63, unk_0xC1A5EC5C986B98AD(), 0))
										{
											bVar0 = unk_0x66599E73DBA5A850(iLocal_62);
											if (!unk_0x0E0433D7F75E162D(uLocal_191))
											{
											}
											if (bVar0 == 0 && bLocal_90 == 1)
											{
												unk_0x7E70B702E8033847(iLocal_62, 500, 1000, 0, 0, 0, 0);
												unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
												unk_0x71A535529C1CA5DF(iLocal_62, 1);
												func_202(1);
												func_197();
											}
										}
										else
										{
											func_167();
										}
										if (iLocal_669 == 1 && bLocal_149 == 1)
										{
											iLocal_48 = 4;
										}
										else if (bLocal_149)
										{
											iLocal_49 = 2;
										}
										break;
									
									case 2:
										unk_0x90B96B32812DC5B1("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_166();
										if (iLocal_54 && !func_165())
										{
											iLocal_49 = 4;
										}
										break;
									
									case 4:
										unk_0x90B96B32812DC5B1("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_164())
										{
											func_163();
										}
										if (bLocal_155)
										{
											iLocal_49 = 5;
										}
										if (unk_0xF5F493B789EA063E(iLocal_62, joaat("script_task_perform_sequence")) == 7)
										{
											unk_0xDBC7406226B5540E(&uLocal_121);
											unk_0xEDB03CCB50D11479(0, iLocal_63, 5000, 0, 2);
											unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 5000);
											unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xF2CFC6EC8C85FA78(uLocal_121);
											unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
											unk_0x63EF69C6969A3D26(&uLocal_121);
										}
										break;
									
									case 5:
										func_160();
										if (!unk_0x055111B11E6624FD(iLocal_62, 0))
										{
											if (unk_0xF5F493B789EA063E(iLocal_62, joaat("script_task_perform_sequence")) == 7)
											{
												unk_0xDBC7406226B5540E(&uLocal_121);
												unk_0x06A2A5F6A6959BE7(0, iLocal_63, 0);
												unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0xF2CFC6EC8C85FA78(uLocal_121);
												unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
												unk_0x63EF69C6969A3D26(&uLocal_121);
											}
										}
										break;
								}
								if (func_159())
								{
									iLocal_48 = 11;
								}
								if (bLocal_149)
								{
								}
								func_158();
								if (iLocal_49 == 0)
								{
									if (func_156())
									{
										if (iLocal_143 == 4)
										{
											if (unk_0xCE4AAA035282336C(uLocal_66))
											{
												unk_0x45533C09A6C9B409(&uLocal_66);
											}
											if (unk_0xCE4AAA035282336C(uLocal_65))
											{
												unk_0x45533C09A6C9B409(&uLocal_65);
											}
											if (!unk_0xCE4AAA035282336C(iLocal_67))
											{
												iLocal_67 = func_154(uLocal_191);
											}
											iLocal_48 = 4;
										}
										else
										{
											iLocal_48 = 3;
										}
									}
									if (func_153())
									{
										func_152();
									}
								}
								if (func_151())
								{
									func_150();
									func_149();
									if (unk_0x1C4E4DC1EFE24DF1(iLocal_62, Local_184, 7f, 7f, 7f, 0, 1, 0))
									{
										iLocal_143 = 2;
										iLocal_48 = 3;
									}
									else
									{
										iLocal_48 = 4;
									}
								}
								if (bLocal_149)
								{
									if (!unk_0xB8C39D031C377E33(iLocal_63, 0))
									{
										func_147(uLocal_66, &uLocal_142);
									}
									else if (unk_0xCE4AAA035282336C(uLocal_66))
									{
										if (unk_0xBA7A86088686EEAA(iLocal_66) == 1)
										{
										}
										else
										{
											unk_0x3BCF1F6A3573A1DF(iLocal_66, 0);
											unk_0x1886753DA39F38F8(iLocal_66, 1);
										}
									}
								}
								if (func_146())
								{
									iLocal_48 = 10;
								}
								break;
							
							case 4:
								unk_0x90B96B32812DC5B1("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_145(1);
								if (func_164())
								{
									func_163();
									func_160();
								}
								if (func_159())
								{
									iLocal_48 = 11;
								}
								func_137();
								break;
							
							case 5:
								unk_0x90B96B32812DC5B1("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_145(1);
								if (!bLocal_152)
								{
									func_136(iLocal_62, &uLocal_193);
									uLocal_193 = uLocal_193;
									func_135();
									func_134();
									func_133();
									if (func_132())
									{
										func_131();
										func_197();
									}
									if (func_124(func_125()) < iLocal_192)
									{
										iLocal_48 = 12;
									}
								}
								func_61();
								break;
							
							case 10:
								unk_0x90B96B32812DC5B1("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
							
							case 3:
								func_59();
								break;
							
							case 11:
								func_58();
								break;
							
							case 6:
								if (func_159())
								{
									iLocal_48 = 11;
								}
								func_41();
								break;
							
							case 8:
								if (!unk_0x66599E73DBA5A850(iLocal_62))
								{
									if (unk_0xEAEF747543427AC5(iLocal_62, unk_0xC1A5EC5C986B98AD(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_48 = 6;
									}
									else
									{
										func_278();
									}
								}
								break;
							
							case 9:
								unk_0x90B96B32812DC5B1("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (unk_0x7DE17ACDD8BA2642(iLocal_63))
								{
									if (unk_0x66599E73DBA5A850(iLocal_63))
									{
										if (unk_0xCE4AAA035282336C(iLocal_66))
										{
											unk_0x45533C09A6C9B409(&iLocal_66);
										}
										if (!unk_0x7DE17ACDD8BA2642(iLocal_62))
										{
											if (unk_0x7DE17ACDD8BA2642(iLocal_64))
											{
												unk_0xEF078F1FEE785D3E(&iLocal_64);
											}
											func_40();
											iLocal_56 = 1;
											func_137();
										}
									}
								}
								break;
							
							case 12:
								if (unk_0x7DE17ACDD8BA2642(iLocal_64))
								{
									unk_0xEF078F1FEE785D3E(&iLocal_64);
								}
								unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
								func_197();
								break;
							
							case 13:
								func_39();
								break;
							}
					}
					if (bLocal_60)
					{
						if (unk_0x0E0433D7F75E162D(uLocal_191))
						{
							if (unk_0xC6695AB241B15DEF(uLocal_191))
							{
								if (unk_0x2A488C176D52CCA5(Local_184, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 150f)
								{
									func_278();
								}
							}
						}
					}
					else if (bLocal_149)
					{
						if (!unk_0x66599E73DBA5A850(iLocal_63))
						{
							if (iLocal_48 != 6)
							{
								if (func_38(unk_0xC1A5EC5C986B98AD(), iLocal_63, 1) > 150f && (!unk_0x865259F0333CAA4B(iLocal_63) || unk_0xDB08595445CDE2FF(iLocal_63)))
								{
									func_37(&uLocal_380, 0, 0);
									iLocal_48 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_66, iLocal_63, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_37(&uLocal_380, 0, 0);
						}
					}
					if (unk_0x7DE17ACDD8BA2642(iLocal_62))
					{
						if (!unk_0x66599E73DBA5A850(iLocal_62))
						{
							if (unk_0x7559C38E6535AB89(iLocal_62, unk_0xC1A5EC5C986B98AD(), 1))
							{
								if (unk_0x7DE17ACDD8BA2642(iLocal_64))
								{
									if (unk_0x836874EEF89A8AC0(iLocal_64, iLocal_62))
									{
										unk_0xA81AA70A4D25E140(iLocal_64, 1, 1);
									}
								}
							}
						}
					}
					if (iLocal_150)
					{
						if (!iLocal_163)
						{
							if (!unk_0x055111B11E6624FD(iLocal_63, 0) && !unk_0x055111B11E6624FD(iLocal_62, 0))
							{
								if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iLocal_63, 1), unk_0x30BE8A934C020461(iLocal_62, 1), 1) > 100f && unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iLocal_63, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1) < 100f)
								{
									unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 200f, -1, 0, 0);
									iLocal_163 = 1;
								}
							}
						}
					}
					if (bLocal_149 && !iLocal_150)
					{
						if (!unk_0x66599E73DBA5A850(iLocal_63))
						{
							if (bLocal_90 == 3)
							{
								if (unk_0xF5F493B789EA063E(iLocal_63, joaat("script_task_smart_flee_ped")) != 1)
								{
									unk_0xA0E06A3361300416(iLocal_63);
									unk_0xC6C9BF71106ABCAC(iLocal_63, iLocal_62, 200f, -1, 0, 0);
									unk_0xC5F9EF8F410596F9(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
									iLocal_150 = 1;
								}
							}
							else if (unk_0xF5F493B789EA063E(iLocal_63, joaat("script_task_smart_flee_ped")) != 1)
							{
								unk_0xA0E06A3361300416(iLocal_63);
								unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 200f, -1, 0, 0);
								unk_0xC5F9EF8F410596F9(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
								iLocal_150 = 1;
							}
							if (unk_0x18D781E5FEB0E5E3(iLocal_63, -2134635134))
							{
								unk_0xC6C9BF71106ABCAC(iLocal_63, iLocal_62, 200f, -1, 0, 0);
								unk_0xC5F9EF8F410596F9(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
								iLocal_150 = 1;
							}
							if (bLocal_90 == 1 || bLocal_90 == 4)
							{
								if (unk_0x7BB3D8F4F6310EB8(iLocal_63, cLocal_359, sLocal_369, 3))
								{
									if (unk_0x92377426879E21FF(iLocal_63, cLocal_359, sLocal_369) >= 0.922f)
									{
										unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 200f, -1, 0, 0);
										unk_0xC5F9EF8F410596F9(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
										iLocal_150 = 1;
									}
								}
								if (unk_0x7BB3D8F4F6310EB8(iLocal_63, cLocal_359, sLocal_367, 3))
								{
									if (unk_0x92377426879E21FF(iLocal_63, cLocal_359, sLocal_367) >= 0.922f)
									{
										unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 200f, -1, 0, 0);
										unk_0xC5F9EF8F410596F9(iLocal_63, joaat("MotionState_Run"), 1, 0, 0);
										iLocal_150 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_278();
		}
	}
}

void func_1()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_62))
	{
		if (unk_0x66599E73DBA5A850(iLocal_62))
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_63))
			{
				if (unk_0x66599E73DBA5A850(iLocal_63))
				{
					func_278();
				}
			}
		}
	}
	if (unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0xCE4AAA035282336C(uLocal_65))
		{
			unk_0x45533C09A6C9B409(&iLocal_65);
		}
	}
	if (unk_0x66599E73DBA5A850(iLocal_63))
	{
		if (unk_0xCE4AAA035282336C(iLocal_66))
		{
			unk_0x45533C09A6C9B409(&iLocal_66);
		}
	}
	if (!iLocal_161)
	{
		if (unk_0x66599E73DBA5A850(iLocal_63))
		{
			func_2(&uLocal_194, 1);
			iLocal_161 = 1;
		}
	}
	if (!iLocal_162)
	{
		if (unk_0x66599E73DBA5A850(iLocal_62))
		{
			func_2(&uLocal_194, 2);
			iLocal_162 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xCE4AAA035282336C(uParam0))
	{
		if ((unk_0x7DE17ACDD8BA2642(iParam1) && unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD())) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0xA6B591D40DE982B5(iParam1))
			{
				if (unk_0xFBD273FDBCF0C5BD(unk_0x4DFB7A1A6909D574(iParam1), 0))
				{
					fVar1 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x37B37B8045788E6A(iParam0, 1);
						unk_0x5E3A54CF3E9DF9FC(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x37B37B8045788E6A(iParam0, 0);
						unk_0x5E3A54CF3E9DF9FC(iParam0, 255);
					}
				}
			}
			else if (unk_0x71904BD37B848CAF(iParam1))
			{
				if (!unk_0x66599E73DBA5A850(unk_0x9C8D7679C15E75FF(iParam1)))
				{
					fVar1 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x37B37B8045788E6A(iParam0, 1);
						unk_0x5E3A54CF3E9DF9FC(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x37B37B8045788E6A(iParam0, 0);
						unk_0x5E3A54CF3E9DF9FC(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()
{
	if (!unk_0x66599E73DBA5A850(iLocal_63) || !bLocal_133)
	{
		func_5(&uLocal_380, iLocal_63, 0, 0, 1, 1, 1);
	}
	else
	{
		func_37(&uLocal_380, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		func_37(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_8(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x3FACE5B6ACB3A4AA())
	{
		if (unk_0xA5E11AF0A2B928C1() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xB71C73D0269747D5(iVar0))
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_36(iVar0))
	{
		func_35();
	}
	if (func_34(iParam1) && unk_0x51DF6895C236B231(iParam1))
	{
		iVar1 = 0;
		if (unk_0x71904BD37B848CAF(iParam1))
		{
			unk_0x1EC62F08E5FEE4F4(unk_0x9C8D7679C15E75FF(iParam1));
			unk_0x0B9E116BF89A0A6B(unk_0x9C8D7679C15E75FF(iParam1), 1);
			if (unk_0x9F13F6DF99716F66(unk_0x9C8D7679C15E75FF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6B591D40DE982B5(iParam1))
		{
			unk_0x9137AB1FD8C79729(unk_0x4DFB7A1A6909D574(iParam1));
			if (unk_0x0F68F5841D33217C(unk_0x4DFB7A1A6909D574(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x4E7A9806173C3AD1(iParam1))
		{
			unk_0x38A3D119469E88B4(unk_0x29F9842A71C1C2FF(iParam1));
			if (unk_0x1B1CC398E002E686(unk_0x29F9842A71C1C2FF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x3FACE5B6ACB3A4AA())
		{
			if (func_29(uParam0, bParam7, bParam9, 0))
			{
				func_25(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((unk_0xB71C73D0269747D5(uParam0->f_3) && !unk_0xB71C73D0269747D5(iVar0)) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if ((iVar1 && !unk_0xF0E4B64AC0B5660E()) && uParam8)
						{
							if (!func_36(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x4310A0DB886F9FED("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (unk_0xB71C73D0269747D5(uParam0->f_3) && !unk_0xB71C73D0269747D5(iVar0))
				{
					if (((unk_0x865259F0333CAA4B(iParam1) && iVar1) && !unk_0xF0E4B64AC0B5660E()) && uParam8)
					{
						if (!func_36(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x4310A0DB886F9FED("CMN_HINT", iVar0))
							{
								func_11(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xB71C73D0269747D5(sParam5))
			{
				if (func_36(sParam5))
				{
					unk_0xCD3C8E1022864F65(1);
				}
			}
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(3) == 3 || unk_0x80A3F4E694565F6A(3) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(6) == 3 || unk_0x80A3F4E694565F6A(6) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(4) == 3 || unk_0x80A3F4E694565F6A(4) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(5) == 3 || unk_0x80A3F4E694565F6A(5) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(2) == 3 || unk_0x80A3F4E694565F6A(2) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C9D6596CF19A4E2() == 3 || unk_0x8C9D6596CF19A4E2() == 4)
				{
					func_37(uParam0, iVar0, 1);
				}
			}
			if (!func_29(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)
{
	if (func_34(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x1F9F6C767BE640D5(unk_0xC1A5EC5C986B98AD());
	}
	if (unk_0x3FACE5B6ACB3A4AA())
	{
		unk_0xEF54B7007CB2210B(1);
		unk_0x0D6E6120F1782BCF(0);
		unk_0x3FA8C73B5856A3E4("HINT_CAM_SCENE");
		unk_0x29978E5D6F8BB77E("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x451128B7D435FBF2("FocusOut", 0, 0);
			unk_0x531D638530A8DB97(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_10(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xA5E11AF0A2B928C1()
		{
			return 1;
		}
	}
	return 0;
}

int func_11(bool bParam0)
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113648.f_10051.f_100++;
			}
			return Global_113648.f_10051.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113648.f_10051.f_101++;
			}
			return Global_113648.f_10051.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113648.f_10051.f_102++;
			}
			return Global_113648.f_10051.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_12(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_13(char* sParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!unk_0x2AC37494BBF1DB16(sParam0) && func_36(sParam0)) || func_36("CMN_HINT"))
		{
			unk_0xCD3C8E1022864F65(1);
		}
		return 0;
	}
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		return 0;
	}
	if (func_24(0))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60543)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
		{
			if (unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(3) == 3 || unk_0x80A3F4E694565F6A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(6) == 3 || unk_0x80A3F4E694565F6A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(4) == 3 || unk_0x80A3F4E694565F6A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(5) == 3 || unk_0x80A3F4E694565F6A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(2) == 3 || unk_0x80A3F4E694565F6A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8C9D6596CF19A4E2() == 3 || unk_0x8C9D6596CF19A4E2() == 4)
			{
				return 0;
			}
			if (unk_0x020429064B9B9A70())
			{
				return 0;
			}
		}
	}
	if ((func_22() || func_21(Global_4718592.f_166301)) || func_20())
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			iVar1 = func_19(unk_0xC1A5EC5C986B98AD(), 0);
			if (((unk_0xC78C3E6F7A5988D9(iVar0, iVar1) || (unk_0x504B9BB48D41C264(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x504B9BB48D41C264(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x504B9BB48D41C264(iVar0) == joaat("riot2") && iVar1 == 0) && func_18(iVar0, 10)) && unk_0xCA36A30E79A35222(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962010)
	{
		return 0;
	}
	if (func_15(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_16(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x48DC6A21D1CAD89C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_17()
{
	return -1;
}

int func_18(int iParam0, int iParam1)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0x6BDF27AD591C4E31(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0xF66CFEE3C6DDCF4D(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (unk_0x3C3D6D026CF7F51B(iParam0, iParam1))
		{
			iVar0 = unk_0x95DC39736F6748E3(iParam0, iParam1);
			if (unk_0x7DE17ACDD8BA2642(iVar0))
			{
				iVar1 = unk_0xB47599824058F1C1(unk_0x504B9BB48D41C264(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x9CFCDD9C62B56708(iVar0, iVar3, 0))
					{
						if (unk_0xA66E176E5772E965(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_20()
{
	return Global_2683862.f_19;
}

bool func_21(int iParam0)
{
	return iParam0 == 51;
}

var func_22()
{
	return Global_2683862.f_18;
}

bool func_23()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_25(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581968 == 1)
	{
		return;
	}
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
		func_37(uParam0, 0, 0);
	}
	if (func_28(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x71904BD37B848CAF(iParam1))
		{
			iVar0 = unk_0x9C8D7679C15E75FF(iParam1);
			if (!unk_0x3C3D6D026CF7F51B(iVar0, 0))
			{
				if (unk_0x60A06DE259634304(iVar0))
				{
					if (!func_26())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xE07B92C7EA4970AA(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xEF54B7007CB2210B(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x882C9EFD4718B1BE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), iParam1, -1, iVar3, iVar4);
	unk_0x451128B7D435FBF2("FocusIn", 0, 0);
	unk_0xAEA29937C5240DA0("HINT_CAM_SCENE");
	unk_0x531D638530A8DB97(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_26()
{
	return func_27(unk_0x93E99A2DBCBA9CFA());
}

int func_27(int iParam0)
{
	if (unk_0x504B9BB48D41C264(unk_0xF2CFBB1105511E1A(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_28(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xA5E11AF0A2B928C1() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
					{
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_32(bParam1, bParam2, bParam3) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0xA2C02BFE3012901E(unk_0xC1A5EC5C986B98AD(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
					{
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0xA2C02BFE3012901E(unk_0xC1A5EC5C986B98AD(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_35();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x8B438725D591ED78(0, 140, 1);
			unk_0x8B438725D591ED78(0, 80, 1);
			if (unk_0xA2C9DE6085F5645B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x8B438725D591ED78(0, 80, 1);
		if (unk_0xD487F57C937BE625())
		{
			if (unk_0xA2C9DE6085F5645B(0, 80))
			{
				unk_0xEF54B7007CB2210B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_32(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x8B438725D591ED78(0, 140, 1);
			unk_0x8B438725D591ED78(0, 80, 1);
			if (unk_0x992AACDC3C066F55(0, 80) && unk_0xA5E11AF0A2B928C1() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x8B438725D591ED78(0, 80, 1);
		if (unk_0xD487F57C937BE625())
		{
			if (unk_0x992AACDC3C066F55(0, 80) && unk_0xA5E11AF0A2B928C1() > Global_116)
			{
				unk_0xEF54B7007CB2210B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0xA6B591D40DE982B5(iParam0))
		{
			if (unk_0xFBD273FDBCF0C5BD(unk_0x4DFB7A1A6909D574(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x71904BD37B848CAF(iParam0))
		{
			if (!unk_0x66599E73DBA5A850(unk_0x9C8D7679C15E75FF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x4E7A9806173C3AD1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	unk_0xECDAB41968FF21A8(&Global_8254, 4);
}

bool func_36(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_37(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_2793044.f_4690, 26))
		{
			return;
		}
	}
	if (unk_0x3FACE5B6ACB3A4AA())
	{
		unk_0x0D6E6120F1782BCF(iParam2);
		unk_0x29978E5D6F8BB77E("FocusIn");
		unk_0x3FA8C73B5856A3E4("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x451128B7D435FBF2("FocusOut", 0, 0);
			unk_0x531D638530A8DB97(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xEF54B7007CB2210B(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xB71C73D0269747D5(sVar0))
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xB71C73D0269747D5(uParam0->f_3))
	{
		if (func_36(uParam0->f_3))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
	if (!unk_0xB71C73D0269747D5(sVar0))
	{
		if (func_36(sVar0))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
}

float func_38(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(iParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

void func_39()
{
	func_278();
}

void func_40()
{
	if (!unk_0x0E0433D7F75E162D(uLocal_191))
	{
		if (unk_0x66599E73DBA5A850(iLocal_63))
		{
			Local_184 = { unk_0x2B615FCF11D3E1D3(iLocal_63, 1067030938, 1069547520) };
		}
		else
		{
			Local_184 = { unk_0x223044F9F739377D(unk_0x30BE8A934C020461(iLocal_63, 1), 1067030938, 1069547520) };
		}
		uLocal_191 = unk_0x8D2015F36A52256C(joaat("pickup_money_wallet"), Local_184, uLocal_144, iLocal_192, 1, iLocal_85);
		iLocal_67 = func_154(uLocal_191);
		func_37(&uLocal_380, 0, 0);
		bLocal_60 = true;
	}
}

void func_41()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "flee_backward_loop_shopkeeper", 3))
		{
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x984708151807AC6D(0, 40000f, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
		else if (unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x984708151807AC6D(0, 40000f, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
		func_42(&uLocal_194, cLocal_103, sLocal_110, 4, 0, 0, 0);
		iLocal_154 = 1;
		unk_0x71A535529C1CA5DF(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
		func_278();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_57(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0xD6625E11483B2324(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_56();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0DCB385165FDE763())
		{
			return 0;
		}
		if (func_55(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_54();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x061B1200C95204CB(&Global_8253, 20);
			unk_0x061B1200C95204CB(&Global_8254, 17);
			unk_0x061B1200C95204CB(&Global_8255, false);
			if (bParam2)
			{
				func_52();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (func_51())
				{
					return 0;
				}
				if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x87B83AFF6D0F83FD(unk_0xC1A5EC5C986B98AD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
					{
						return 0;
					}
					if (unk_0x197DD015F81B0D16(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_50())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_49();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_48();
		func_44();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_56();
	}
	return 0;
}

void func_44()
{
	if (!func_45())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_45()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_17())
	{
		return 0;
	}
	if (func_46(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x1758F8A8511510AB())
	{
		return 0;
	}
	return 1;
}

bool func_46(int iParam0)
{
	return func_47(iParam0, 20);
}

var func_47(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD6625E11483B2324(0);
	Global_21725 = 1;
}

void func_49()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x061B1200C95204CB(&Global_8254, 16);
}

int func_50()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar1, 1);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC67B4044F323AEB2() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_52()
{
	if (func_53(14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_125();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

bool func_53(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_56()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if ((unk_0xE444FD7526C8BB46() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

void func_58()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		unk_0x909F139DC199D8E0(iLocal_62);
		unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
		unk_0x71A535529C1CA5DF(iLocal_62, 1);
		if (unk_0x7DE17ACDD8BA2642(iLocal_64))
		{
			unk_0xEF078F1FEE785D3E(&iLocal_64);
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xCE4AAA035282336C(iLocal_65))
		{
			unk_0x45533C09A6C9B409(&iLocal_65);
		}
		unk_0x1EEF71E3CDD868D3(&iLocal_62);
	}
	if (unk_0x66599E73DBA5A850(iLocal_63) || unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0xCE4AAA035282336C(iLocal_66))
		{
			unk_0x45533C09A6C9B409(&iLocal_66);
		}
		if (unk_0xCE4AAA035282336C(iLocal_65))
		{
			unk_0x45533C09A6C9B409(&iLocal_65);
		}
		if (unk_0x0E0433D7F75E162D(uLocal_191))
		{
			if (unk_0xC6695AB241B15DEF(uLocal_191))
			{
				iLocal_56 = 1;
				func_137();
			}
			else
			{
				func_145(0);
				func_278();
			}
		}
		else
		{
			func_278();
		}
	}
}

void func_59()
{
	bool bVar0;
	
	func_137();
	if (unk_0x0E0433D7F75E162D(uLocal_191))
	{
		if (unk_0xC6695AB241B15DEF(uLocal_191))
		{
		}
	}
	if (iLocal_143 == 1)
	{
		if (!iLocal_51)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_63))
			{
				unk_0x909F139DC199D8E0(iLocal_63);
				unk_0xCAC2B0C65B18E755(iLocal_63, unk_0xC1A5EC5C986B98AD(), 0, 16);
				unk_0x71A535529C1CA5DF(iLocal_63, 1);
			}
			if (!unk_0x66599E73DBA5A850(iLocal_62))
			{
				if (unk_0x0E0433D7F75E162D(uLocal_191))
				{
					if (unk_0xC6695AB241B15DEF(uLocal_191))
					{
						unk_0x909F139DC199D8E0(iLocal_62);
						unk_0xDBC7406226B5540E(&uLocal_121);
						unk_0x7D9A648CC1936BDA(0, unk_0x55AE93A6E3B0AE8F(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
						unk_0xF2CFC6EC8C85FA78(uLocal_121);
						unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
						unk_0x63EF69C6969A3D26(&uLocal_121);
					}
				}
			}
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 2)
	{
		if (!iLocal_51)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_63))
			{
				unk_0x909F139DC199D8E0(iLocal_63);
				unk_0xCAC2B0C65B18E755(iLocal_63, unk_0xC1A5EC5C986B98AD(), 0, 16);
				unk_0x71A535529C1CA5DF(iLocal_63, 1);
				unk_0x351E6B9FD37CFF33(iLocal_63, 0, 1);
				unk_0x1EEF71E3CDD868D3(&iLocal_63);
			}
			if (!unk_0x66599E73DBA5A850(iLocal_62))
			{
				if (unk_0x0E0433D7F75E162D(uLocal_191))
				{
					if (unk_0xC6695AB241B15DEF(uLocal_191))
					{
						if (unk_0x1C4E4DC1EFE24DF1(iLocal_62, unk_0x55AE93A6E3B0AE8F(uLocal_191), 10f, 10f, 10f, 0, 1, 0))
						{
							if (bLocal_90 == 3)
							{
								if ((!unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "handsup_standing_enter", 3) && !unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "handsup_standing_base", 3)) && !unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "handsup_standing_exit", 3))
								{
									unk_0x909F139DC199D8E0(iLocal_62);
									unk_0xDBC7406226B5540E(&uLocal_121);
									unk_0x7D9A648CC1936BDA(0, unk_0x55AE93A6E3B0AE8F(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
									unk_0xF2CFC6EC8C85FA78(uLocal_121);
									unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
									unk_0x63EF69C6969A3D26(&uLocal_121);
									iLocal_51 = 1;
								}
							}
							else if ((!unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, sLocal_370, 3) && !unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, sLocal_366, 3)) && !unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, sLocal_368, 3))
							{
								unk_0x909F139DC199D8E0(iLocal_62);
								unk_0xDBC7406226B5540E(&uLocal_121);
								unk_0x7D9A648CC1936BDA(0, unk_0x55AE93A6E3B0AE8F(uLocal_191), 1f, 20000, 0.25f, 0, 1193033728);
								unk_0xF2CFC6EC8C85FA78(uLocal_121);
								unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
								unk_0x63EF69C6969A3D26(&uLocal_121);
								iLocal_51 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (bLocal_90 == 3)
					{
						if ((!unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "handsup_standing_enter", 3) && !unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "handsup_standing_base", 3)) && !unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "handsup_standing_exit", 3))
						{
							unk_0x909F139DC199D8E0(iLocal_62);
							unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
							unk_0x71A535529C1CA5DF(iLocal_62, 1);
							if (unk_0xCE4AAA035282336C(iLocal_65))
							{
								unk_0x45533C09A6C9B409(&iLocal_65);
							}
							unk_0x1EEF71E3CDD868D3(&iLocal_62);
							iLocal_51 = 1;
							iLocal_48 = 9;
						}
					}
					else if ((!unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, sLocal_370, 3) && !unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, sLocal_366, 3)) && !unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, sLocal_368, 3))
					{
						unk_0x909F139DC199D8E0(iLocal_62);
						unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
						unk_0x71A535529C1CA5DF(iLocal_62, 1);
						if (unk_0xCE4AAA035282336C(iLocal_65))
						{
							unk_0x45533C09A6C9B409(&iLocal_65);
						}
						unk_0x1EEF71E3CDD868D3(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 9;
					}
				}
			}
		}
	}
	if (iLocal_143 == 3)
	{
		if (!iLocal_51)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_63))
			{
				unk_0x909F139DC199D8E0(iLocal_63);
				unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
				unk_0x71A535529C1CA5DF(iLocal_63, 1);
				unk_0x351E6B9FD37CFF33(iLocal_63, 0, 1);
				unk_0x1EEF71E3CDD868D3(&iLocal_63);
			}
			if (!unk_0x66599E73DBA5A850(iLocal_62))
			{
				unk_0x909F139DC199D8E0(iLocal_62);
				unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
				unk_0x71A535529C1CA5DF(iLocal_62, 1);
				unk_0x1EEF71E3CDD868D3(&iLocal_62);
			}
			iLocal_56 = 1;
			iLocal_51 = 1;
		}
	}
	if (iLocal_143 == 1 || iLocal_143 == 2)
	{
		if (!unk_0x66599E73DBA5A850(iLocal_62))
		{
			if (iLocal_51)
			{
				if (unk_0x0E0433D7F75E162D(uLocal_191))
				{
					if (unk_0xC6695AB241B15DEF(uLocal_191))
					{
						if (unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_360, "pickup_low", 3))
						{
							if (unk_0x92377426879E21FF(iLocal_62, cLocal_360, "pickup_low") > 0.5f)
							{
								if (unk_0x0E0433D7F75E162D(uLocal_191))
								{
									if (unk_0xC6695AB241B15DEF(uLocal_191))
									{
										func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
										unk_0x7E131AB8520C5824(uLocal_191);
										bLocal_52 = true;
									}
								}
							}
						}
						else if (unk_0xF5F493B789EA063E(iLocal_62, joaat("script_task_perform_sequence")) == 7)
						{
							unk_0x909F139DC199D8E0(iLocal_62);
							unk_0xDBC7406226B5540E(&uLocal_121);
							unk_0x3EE48ADC8C7F5CC4(0, cLocal_360, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
							unk_0xF2CFC6EC8C85FA78(uLocal_121);
							unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
							unk_0x63EF69C6969A3D26(&uLocal_121);
							unk_0x71A535529C1CA5DF(iLocal_62, 1);
						}
					}
					else if (bLocal_52)
					{
						unk_0xCFFDA1550DF82B52(iLocal_62, iLocal_192);
						unk_0x1EEF71E3CDD868D3(&iLocal_62);
						func_202(3);
						func_197();
					}
					else
					{
						unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
						unk_0x71A535529C1CA5DF(iLocal_62, 1);
						if (unk_0xCE4AAA035282336C(iLocal_65))
						{
							unk_0x45533C09A6C9B409(&iLocal_65);
						}
						unk_0x1EEF71E3CDD868D3(&iLocal_62);
						iLocal_51 = 1;
						iLocal_48 = 12;
					}
				}
				else if (bLocal_52)
				{
					unk_0xCFFDA1550DF82B52(iLocal_62, iLocal_192);
					unk_0x1EEF71E3CDD868D3(&iLocal_62);
					func_202(3);
					func_197();
				}
				else
				{
					unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
					unk_0x71A535529C1CA5DF(iLocal_62, 1);
					if (unk_0xCE4AAA035282336C(iLocal_65))
					{
						unk_0x45533C09A6C9B409(&iLocal_65);
					}
					unk_0x1EEF71E3CDD868D3(&iLocal_62);
					iLocal_51 = 1;
					iLocal_48 = 12;
				}
			}
		}
		else
		{
			iLocal_48 = 9;
		}
	}
}

void func_60()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		unk_0x909F139DC199D8E0(iLocal_62);
		unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
		unk_0x71A535529C1CA5DF(iLocal_62, 1);
		unk_0x1EEF71E3CDD868D3(&iLocal_62);
	}
}

void func_61()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	struct<2> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (!bLocal_152)
		{
			if (iLocal_153)
			{
				Var15 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
				iVar18 = 1;
				if (bLocal_90 == 1)
				{
					if (Var15.f_2 > 33.5f)
					{
						iVar18 = 0;
					}
				}
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 5f, 5f, 5f, 0, 1, 0) && iVar18 == 1)
				{
					if (func_122(2))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
					{
						if (func_121(1, 0, 1))
						{
							if (!func_120())
							{
								if (!unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
								{
									func_112(1, 1, 1, 0, 0, 0, 0);
									if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
									{
										while (!func_110(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), uLocal_77, 1, 1056964608, 0, 1, 0) || func_165())
										{
											unk_0xE288789FFB1A0C2F();
											unk_0x4EDE34FBADD967A6(0);
										}
										if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
										{
											unk_0x6FE9A0C01D25F413(unk_0xC1A5EC5C986B98AD(), 0, 0);
										}
									}
									unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
									if (!unk_0x66599E73DBA5A850(iLocal_62))
									{
										unk_0xAC2C285C82A9244C(iLocal_62, 0);
									}
									unk_0xE288789FFB1A0C2F();
									unk_0xEE6BB4D0718B795B(0);
									unk_0xE7282371418F8E0E(iLocal_141);
									if (unk_0x0DCB385165FDE763())
									{
										func_108();
									}
									bLocal_152 = true;
									unk_0xC1B1E9A034A63A62(0);
								}
							}
						}
					}
				}
				else
				{
					func_106(unk_0x30BE8A934C020461(iLocal_62, 1), &uLocal_76, &uLocal_77);
				}
			}
			else if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 15f, 15f, 15f, 0, 1, 0))
			{
				unk_0xDBC7406226B5540E(&uLocal_121);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 2048, 2);
				if (iLocal_47 == 2)
				{
					unk_0x3EE48ADC8C7F5CC4(0, cLocal_377, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				unk_0xF2CFC6EC8C85FA78(uLocal_121);
				unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
				unk_0x63EF69C6969A3D26(&uLocal_121);
				unk_0xC5F9EF8F410596F9(iLocal_62, joaat("MotionState_Walk"), 0, 0, 0);
				iLocal_153 = 1;
			}
		}
		if (bLocal_152)
		{
			switch (iLocal_151)
			{
				case 0:
					unk_0xE288789FFB1A0C2F();
					if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if (!unk_0x66599E73DBA5A850(iLocal_62))
						{
							func_103(iLocal_62, &Local_125, &Local_128, cLocal_361, sLocal_363);
							if (bLocal_90 == 1)
							{
								if (Local_128.f_2 > 225f && Local_128.f_2 < 265f)
								{
									if (Local_128.f_2 < 245f)
									{
										Local_128.f_2 = 225f;
									}
									else
									{
										Local_128.f_2 = 265f;
									}
								}
								else if (Local_128.f_2 > 45f && Local_128.f_2 < 85f)
								{
									if (Local_128.f_2 < 65f)
									{
										Local_128.f_2 = 45f;
									}
									else
									{
										Local_128.f_2 = 85f;
									}
								}
							}
							Local_125.f_2 = (Local_125.f_2 + 2f);
							unk_0xDE209AFE421606C6(Local_125, &(Local_125.f_2), 0, 0);
							Var1 = { unk_0xFC2542C169B039F2(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
							Var10 = { Var1 - Local_125 };
							Var10.f_2 = 0f;
							fVar13 = unk_0x652D2EEEF1D3E62C(Var10);
							unk_0xDE209AFE421606C6(Var1, &(Var1.f_2), 0, 0);
							fVar14 = (Local_125.f_2 - Var1.f_2);
							Local_128.f_0 = unk_0x360118B65D6530C6(fVar14, fVar13);
							if (Local_128.f_0 > 30f || Local_128.f_0 < -30f)
							{
								Local_128.f_0 = 0f;
							}
						}
						if (unk_0xFBD273FDBCF0C5BD(unk_0xE475C458F52F1781(), 0))
						{
							if (!unk_0xFBD273FDBCF0C5BD(iVar0, 0))
							{
								iVar0 = unk_0xE475C458F52F1781();
								unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iVar0), &uVar4, &Var7);
								if (unk_0x1C4E4DC1EFE24DF1(iVar0, Local_125, (Var7.f_1 + 1.5f), (Var7.f_1 + 1.5f), 3f, 0, 1, 0) || unk_0x1C4E4DC1EFE24DF1(iVar0, unk_0xFC2542C169B039F2(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Var7.f_1 + 1f), (Var7.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (bLocal_90 == 1)
									{
										if (Local_128.f_2 > 40f && Local_128.f_2 < 220f)
										{
											Local_80 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_79 = 331.9427f;
										}
										else
										{
											Local_80 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_79 = 148.9075f;
										}
									}
									else if (bLocal_90 == 3)
									{
										if (Local_128.f_2 > 160f && Local_128.f_2 < 340f)
										{
											Local_80 = { -319.709f, -837.0066f, 30.449f };
											fLocal_79 = 61.7986f;
										}
										else
										{
											Local_80 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_79 = 269.6216f;
										}
									}
									else if (bLocal_90 == 4)
									{
										if (Local_128.f_2 > 240f || Local_128.f_2 < 60f)
										{
											Local_80 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_79 = 156.7986f;
										}
										else
										{
											Local_80 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_79 = 344.6216f;
										}
									}
									else
									{
										fLocal_79 = unk_0xD850DD08D5434072(iVar0);
										Local_80 = { func_101(Local_125, unk_0xFC2542C169B039F2(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2)) };
									}
									if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
									{
										unk_0xC2E3C377D893C17A(iVar0, Local_80, 1, 0, 0, 1);
										unk_0x692C3FDAD7DB53CC(iVar0, fLocal_79);
										unk_0xCB8DD5B44DBC2DEB(iVar0, 1084227584);
										unk_0xC8104307D08190D0(iVar0, 1);
									}
								}
							}
						}
						unk_0x2117C3CCFF2D957A(Local_125, 20f, 2);
						unk_0xB7591EFB00E1E4E4(Local_125, 20f, 0);
						unk_0xF82BC5193AF62796(Local_125, 2f, 1, 1, 0, 0);
						unk_0xCB21E46FFA9189A0(unk_0xC1A5EC5C986B98AD(), 1);
						iLocal_64 = unk_0xF19D6C0E8B56BE23(iLocal_85, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1, 1, 0);
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
						{
							unk_0xBD02C9D4D7076ECC(iLocal_64, unk_0xC1A5EC5C986B98AD(), unk_0xCF99BEF1317B66DA(unk_0xC1A5EC5C986B98AD(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
						}
						uLocal_131 = unk_0x191673E3F99212B2(Local_125, Local_128, 2);
						unk_0xE4E4F775E5660E56(uLocal_131, 0);
						uLocal_132 = unk_0xDEE46CEB08617ECA("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x5950D902D5442CB4(uLocal_132, uLocal_131, sLocal_364, cLocal_361);
						unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
						unk_0x468D976993BF7FE1(unk_0xC1A5EC5C986B98AD(), uLocal_131, cLocal_361, sLocal_362, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!unk_0x66599E73DBA5A850(iLocal_62))
						{
							unk_0x35DD50D05C962B6A(iLocal_62);
							unk_0x468D976993BF7FE1(iLocal_62, uLocal_131, cLocal_361, sLocal_363, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						unk_0xEEF11E0DB5769366(uLocal_132, 1);
						unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
						func_42(&uLocal_194, cLocal_103, sLocal_115, 4, 0, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_151++;
					}
					unk_0xE288789FFB1A0C2F();
					break;
				
				case 1:
					if ((unk_0x411B750250543BD0(uLocal_131) && unk_0xABF98B1999FE64CA(uLocal_131) > 0.9f) || func_99(1000))
					{
						unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
						unk_0xAABD7B0753C5C286(0f);
						unk_0xEEF11E0DB5769366(uLocal_132, 0);
						unk_0x42B9FA814615C4F9(uLocal_132, 0);
						func_98();
						if (!unk_0x66599E73DBA5A850(iLocal_62))
						{
							unk_0x35DD50D05C962B6A(iLocal_62);
							unk_0xCFFDA1550DF82B52(iLocal_62, (iLocal_192 - (iLocal_192 / 10)));
							Var1 = { unk_0xFC2542C169B039F2(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0xDE209AFE421606C6(Var1, &(Var1.f_2), 0, 0);
							unk_0xC2E3C377D893C17A(iLocal_62, Var1, 1, 0, 0, 1);
							unk_0xC5B2830898581862(iLocal_62, 0);
							Var1 = { unk_0xEF996771DB3B2061(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							unk_0x692C3FDAD7DB53CC(iLocal_62, Var1.f_2);
							if (bLocal_90 == 4)
							{
								if (func_97(Var1.f_2, 0f, 90f))
								{
									unk_0xDBC7406226B5540E(&uLocal_121);
									unk_0x7D9A648CC1936BDA(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x984708151807AC6D(0, unk_0xD850DD08D5434072(iLocal_62), 1);
									unk_0xF2CFC6EC8C85FA78(uLocal_121);
									unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
									unk_0x63EF69C6969A3D26(&uLocal_121);
								}
								else
								{
									unk_0xDBC7406226B5540E(&uLocal_121);
									unk_0x7D9A648CC1936BDA(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x984708151807AC6D(0, unk_0xD850DD08D5434072(iLocal_62), 1);
									unk_0xF2CFC6EC8C85FA78(uLocal_121);
									unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
									unk_0x63EF69C6969A3D26(&uLocal_121);
								}
							}
							else
							{
								unk_0xDBC7406226B5540E(&uLocal_121);
								unk_0x984708151807AC6D(0, Var1.f_2, 1);
								unk_0xF2CFC6EC8C85FA78(uLocal_121);
								unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
								unk_0x63EF69C6969A3D26(&uLocal_121);
							}
							unk_0xFE06D34CC973CDD2(iLocal_62, cLocal_378, 1048576000);
							unk_0xC5F9EF8F410596F9(iLocal_62, joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x71A535529C1CA5DF(iLocal_62, 1);
						}
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
						{
							unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
							unk_0xBB6027D1D193CBA6(unk_0xC1A5EC5C986B98AD(), 0, 0);
						}
						if (unk_0x7DE17ACDD8BA2642(iLocal_64))
						{
							unk_0xEF078F1FEE785D3E(&iLocal_64);
						}
						if (!unk_0x66599E73DBA5A850(iLocal_62))
						{
							unk_0xCFFDA1550DF82B52(iLocal_62, (iLocal_192 - (iLocal_192 / 10)));
							unk_0xAC2C285C82A9244C(iLocal_62, 1);
						}
						iVar19 = (iLocal_192 / 100);
						iVar19 *= 90;
						unk_0x4EDE34FBADD967A6(0);
						unk_0x4A954DC99388FAC2(0, 0, 3, 0);
						func_64(func_125(), 1, iVar19);
						func_63(joaat("rc_wallets_returned"), 1);
						func_202(3);
						func_197();
					}
					else if (unk_0x18D781E5FEB0E5E3(unk_0xC1A5EC5C986B98AD(), joaat("detach")))
					{
						if (!unk_0x66599E73DBA5A850(iLocal_62) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
						{
							if (unk_0x836874EEF89A8AC0(iLocal_64, unk_0xC1A5EC5C986B98AD()))
							{
								unk_0xA81AA70A4D25E140(iLocal_64, 0, 1);
								if (unk_0xE07B92C7EA4970AA(iLocal_62))
								{
									unk_0xBD02C9D4D7076ECC(iLocal_64, iLocal_62, unk_0xCF99BEF1317B66DA(iLocal_62, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
								}
								else
								{
									unk_0xBD02C9D4D7076ECC(iLocal_64, iLocal_62, unk_0xCF99BEF1317B66DA(iLocal_62, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
								}
								if (!iLocal_61)
								{
									if (func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0) || func_62())
									{
										iLocal_61 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_61)
					{
						if (func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0) || func_62())
						{
							iLocal_61 = 1;
						}
					}
					unk_0xE288789FFB1A0C2F();
					break;
				}
		}
	}
	else
	{
		func_278();
	}
}

int func_62()
{
	if (Global_21725 == 4)
	{
		if (unk_0xE444FD7526C8BB46())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3CC35ACFFC9C730E(iParam0, iVar0, 1);
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	if (func_96(iParam0) == 3)
	{
		return 0;
	}
	if (func_96(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_96(iParam0), 0, iParam1, iParam2, 0);
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_95();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_94(99, 1);
					func_63(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_79(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63C7B2D430A46FC3())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_94(95, iParam3);
					break;
				
				case 1:
					func_94(97, iParam3);
					break;
				
				case 2:
					func_94(96, iParam3);
					break;
			}
			func_94(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(bVar1);
	}
	iVar5 = (Global_60536[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60536[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60536[iVar2] = 2147483647;
				}
				else
				{
					Global_60536[iVar2] = (Global_60536[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_63(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60536[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60536[iVar2];
			Global_60536[iVar2] = (Global_60536[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[iVar2 /*69*/]++;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
		if (Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_67(iParam0);
	if (Global_43257 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60544[iVar0 /*3*/][0] = Global_113648.f_20566[iVar0];
		Global_60544.f_31[iVar0 /*3*/][0] = Global_113648.f_20566.f_11[iVar0];
		Global_60544.f_62[iVar0 /*3*/][0] = Global_113648.f_20566.f_22[iVar0];
		Global_60544.f_93[iVar0 /*3*/][0] = Global_113648.f_20566.f_33[iVar0];
		Global_60544.f_124[iVar0 /*3*/][0] = Global_113648.f_20566.f_44[iVar0];
		Global_60544.f_155[iVar0 /*3*/][0] = Global_113648.f_20566.f_55[iVar0];
		Global_60544.f_186[iVar0 /*3*/][0] = Global_113648.f_20566.f_66[iVar0];
		Global_60544.f_217[iVar0 /*3*/][0] = Global_113648.f_20566.f_77[iVar0];
		Global_60544.f_248[iVar0 /*3*/][0] = Global_113648.f_20566.f_88[iVar0];
		if (!bParam0)
		{
			Global_60544[iVar0 /*3*/][1] = Global_113648.f_20566[iVar0];
			Global_60544.f_31[iVar0 /*3*/][1] = Global_113648.f_20566.f_11[iVar0];
			Global_60544.f_62[iVar0 /*3*/][1] = Global_113648.f_20566.f_22[iVar0];
			Global_60544.f_93[iVar0 /*3*/][1] = Global_113648.f_20566.f_33[iVar0];
			Global_60544.f_124[iVar0 /*3*/][1] = Global_113648.f_20566.f_44[iVar0];
			Global_60544.f_155[iVar0 /*3*/][1] = Global_113648.f_20566.f_55[iVar0];
			Global_60544.f_186[iVar0 /*3*/][1] = Global_113648.f_20566.f_66[iVar0];
			Global_60544.f_217[iVar0 /*3*/][1] = Global_113648.f_20566.f_77[iVar0];
			Global_60544.f_248[iVar0 /*3*/][1] = Global_113648.f_20566.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60536[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3CC35ACFFC9C730E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3CC35ACFFC9C730E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3CC35ACFFC9C730E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_68(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_74(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_74(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_74(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_74(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_71(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_71(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_71(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_71(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_113648.f_20566.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_70() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x061B1200C95204CB(&(Global_2359296[func_70() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD30970E11AD0FF0D("COUP_RED");
		unk_0x48849374B34BB7B9(func_69(bParam0));
		unk_0x4BE755B3858339A1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_73()
{
	return Global_1574918;
}

void func_74(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_73();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_75(int iParam0)
{
	func_94(93, iParam0);
	func_94(29, iParam0);
	func_94(30, iParam0);
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_78(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_78(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_78(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_78(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xD48CE560FB238316();
		iVar1 = func_77(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xD48CE560FB238316();
		iVar3 = func_77(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xD48CE560FB238316();
		iVar5 = func_77(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xD48CE560FB238316();
		iVar7 = func_77(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xD48CE560FB238316();
		iVar9 = func_77(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xD48CE560FB238316();
		iVar11 = func_77(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		return BitTest(Global_113648.f_20566.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_70() /*5568*/].f_681.f_10, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_72(iParam1)];
		if (unk_0xDD7756E2742E0F6D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_78(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x73651E4B1D91FE32(27))
	{
		return 0;
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDD7756E2742E0F6D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3CC35ACFFC9C730E(joaat("num_cash_spent"), iVar1, 1);
		func_93(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_80(27, 1);
	return 1;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_81(iParam0, iParam1);
}

int func_81(int iParam0, int iParam1)
{
	if (func_53(14) && !func_92(iParam0))
	{
		return 0;
	}
	if (unk_0x73651E4B1D91FE32(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_91(&Global_4542597))
	{
		if (func_89(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_82(&Global_4542597, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD530287A65F961E4(iParam0))
		{
			return 0;
		}
		if (unk_0x73651E4B1D91FE32(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_82(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	func_85(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_83(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_83(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_84(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_84(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_85(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_86(uParam0, iVar0);
		iVar0++;
	}
	func_87(uParam0, (Global_4542596 - 0.5f));
}

void func_86(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_87(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_88(var uParam0)
{
	return uParam0->f_80;
}

bool func_89(var uParam0, int iParam1)
{
	return func_90(uParam0, iParam1) != -1;
}

int func_90(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_91(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xED220A261CE0D89C(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);
	}
	return 0;
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDD7756E2742E0F6D(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3CC35ACFFC9C730E(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_95()
{
	int iVar0;
	
	if (unk_0x7FFBE14C34D75E19())
	{
		unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60536[0] == iVar0)
		{
			Global_60536[0] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60536[1] == iVar0)
		{
			Global_60536[1] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60536[2] == iVar0)
		{
			Global_60536[2] = iVar0;
		}
	}
}

int func_96(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_97(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	var uVar0;
	
	uVar0 = unk_0xD5B705094825AC04(26379945, unk_0x7394CB479CCA24AF(unk_0xC1A5EC5C986B98AD(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD()), 1115815936, 1, 2);
	unk_0xEEF11E0DB5769366(uVar0, 1);
}

int func_99(int iParam0)
{
	if (unk_0x35DF833D93BCC488())
	{
		if ((unk_0xA5E11AF0A2B928C1() - Global_28) > iParam0)
		{
			Global_27 = unk_0xA5E11AF0A2B928C1();
		}
		Global_28 = unk_0xA5E11AF0A2B928C1();
		if ((unk_0xA5E11AF0A2B928C1() - Global_27) > iParam0)
		{
			if (func_100())
			{
				Global_27 = unk_0xA5E11AF0A2B928C1();
				return 1;
			}
		}
	}
	return 0;
}

int func_100()
{
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 0;
	}
	if (unk_0x87644B1F984197FE(0, 18) || unk_0x87644B1F984197FE(2, 18))
	{
		return 1;
	}
	return 0;
}

Vector3 func_101(struct<3> Param0, struct<3> Param3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	struct<3> Var22;
	struct<3> Var25;
	var uVar28;
	var uVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	iVar0 = unk_0xE475C458F52F1781();
	if (!unk_0x1AFE963DA61006ED(iVar0))
	{
		unk_0x85BAE84748AD1A23(iVar0, 1, 0);
	}
	unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iVar0), &Var7, &Var10);
	unk_0x16BB0517A69884B4(Param0, 3, &Var4, 1, 1077936128, 0);
	if (unk_0x2A488C176D52CCA5(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (unk_0x2A488C176D52CCA5(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x7394CB479CCA24AF(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x7394CB479CCA24AF(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0x7394CB479CCA24AF(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0x7394CB479CCA24AF(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x7DE17ACDD8BA2642(iVar0))
				{
					if (!unk_0x055111B11E6624FD(iVar0, 0))
					{
						Var22 = { func_102(Var1, 0f, Var10) };
						Var25 = { func_102(Var1, 0f, Var7) };
						uVar29 = unk_0xB4C9A1D39D0533BF(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (unk_0x5A2817B89A8ECCD2(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (unk_0x2E496FE654DA4166(Var1, Param0, 1) <= 5f || unk_0x2E496FE654DA4166(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x7394CB479CCA24AF(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x7394CB479CCA24AF(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { unk_0x7394CB479CCA24AF(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { unk_0x7394CB479CCA24AF(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (unk_0x7DE17ACDD8BA2642(iVar0))
				{
					if (!unk_0x055111B11E6624FD(iVar0, 0))
					{
						Var22 = { func_102(Var1, 0f, Var10) };
						Var25 = { func_102(Var1, 0f, Var7) };
						uVar29 = unk_0xB4C9A1D39D0533BF(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (unk_0x5A2817B89A8ECCD2(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (unk_0x2E496FE654DA4166(Var1, Param0, 1) <= 5f || unk_0x2E496FE654DA4166(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x7394CB479CCA24AF(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x7394CB479CCA24AF(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0x7394CB479CCA24AF(iVar0, (Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x7394CB479CCA24AF(iVar0, -(Var10.f_0 + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x7DE17ACDD8BA2642(iVar0))
				{
					if (!unk_0x055111B11E6624FD(iVar0, 0))
					{
						Var22 = { func_102(Var1, 0f, Var10) };
						Var25 = { func_102(Var1, 0f, Var7) };
						uVar29 = unk_0xB4C9A1D39D0533BF(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (unk_0x5A2817B89A8ECCD2(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (unk_0x2E496FE654DA4166(Var1, Param0, 1) <= 5f || unk_0x2E496FE654DA4166(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (unk_0x2A488C176D52CCA5(Var4, unk_0x7394CB479CCA24AF(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)) < unk_0x2A488C176D52CCA5(Var4, unk_0x7394CB479CCA24AF(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { unk_0x7394CB479CCA24AF(iVar0, (Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x7394CB479CCA24AF(iVar0, -(Var10.f_0 - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (unk_0x7DE17ACDD8BA2642(iVar0))
				{
					if (!unk_0x055111B11E6624FD(iVar0, 0))
					{
						Var22 = { func_102(Var1, 0f, Var10) };
						Var25 = { func_102(Var1, 0f, Var7) };
						uVar29 = unk_0xB4C9A1D39D0533BF(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (unk_0x5A2817B89A8ECCD2(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (unk_0x2E496FE654DA4166(Var1, Param0, 1) <= 5f || unk_0x2E496FE654DA4166(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return Var1;
}

Vector3 func_102(struct<3> Param0, float fParam3, struct<2> Param4, var uParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

void func_103(int iParam0, var uParam1, var uParam2, char[4] cParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	var uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
	uParam2->f_2 = func_105(iParam0, unk_0xC1A5EC5C986B98AD(), 1);
	fVar3 = func_105(iParam0, unk_0xC1A5EC5C986B98AD(), 1);
	fVar4 = func_105(iParam0, unk_0xC1A5EC5C986B98AD(), 1);
	Var16 = { unk_0x30BE8A934C020461(iParam0, 0) - unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
	if (unk_0x2BBF749E555360DC(cParam3))
	{
		Var13 = { unk_0xFC2542C169B039F2(cParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		Var13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_104(unk_0x30BE8A934C020461(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0xF2A6E8EA57F9D501(unk_0x30BE8A934C020461(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0xD8D74C74516FDA20(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x5A2817B89A8ECCD2(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var10.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0xF2A6E8EA57F9D501(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), fVar4, Var16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_104(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

float func_104(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x360118B65D6530C6(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_105(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	return func_104(Var0, Var3, iParam2);
}

void func_106(struct<3> Param0, var uParam3, var uParam4)
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		Var1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) - Param0 };
		fVar4 = unk_0x06A2A02CDC68090B(Var1.f_0, Var1.f_1);
		if (func_107(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		fVar4 = unk_0x06A2A02CDC68090B(Var1.f_0, Var1.f_1);
		if (func_107(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) > 30f)
		{
			*uParam3 = (6f * 4f);
		}
		else if (unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) > 20f)
		{
			*uParam3 = (6f * 3f);
		}
		else if (unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) > 10f)
		{
			*uParam3 = (6f * 2f);
		}
		else
		{
			*uParam3 = 6f;
		}
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
	else
	{
		*uParam3 = 6f;
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
}

int func_107(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		fVar0 = unk_0xD850DD08D5434072(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_108()
{
	Global_20591 = 0;
	func_109();
}

void func_109()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

int func_110(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x8B438725D591ED78(0, 71, 1);
	unk_0x8B438725D591ED78(0, 72, 1);
	unk_0x8B438725D591ED78(0, 76, 1);
	unk_0x8B438725D591ED78(0, 73, 1);
	unk_0x8B438725D591ED78(0, 59, 1);
	unk_0x8B438725D591ED78(0, 60, 1);
	if (bParam5)
	{
		unk_0x8B438725D591ED78(0, 75, 1);
	}
	unk_0x8B438725D591ED78(0, 80, 1);
	if (!bParam6)
	{
		unk_0x8B438725D591ED78(0, 69, 1);
		unk_0x8B438725D591ED78(0, 70, 1);
		unk_0x8B438725D591ED78(0, 68, 1);
	}
	unk_0x8B438725D591ED78(0, 74, 1);
	unk_0x8B438725D591ED78(0, 86, 1);
	unk_0x8B438725D591ED78(0, 81, 1);
	unk_0x8B438725D591ED78(0, 82, 1);
	unk_0x8B438725D591ED78(0, 138, 1);
	unk_0x8B438725D591ED78(0, 136, 1);
	unk_0x8B438725D591ED78(0, 114, 1);
	unk_0x8B438725D591ED78(0, 107, 1);
	unk_0x8B438725D591ED78(0, 110, 1);
	unk_0x8B438725D591ED78(0, 89, 1);
	unk_0x8B438725D591ED78(0, 89, 1);
	unk_0x8B438725D591ED78(0, 87, 1);
	unk_0x8B438725D591ED78(0, 88, 1);
	unk_0x8B438725D591ED78(0, 113, 1);
	unk_0x8B438725D591ED78(0, 115, 1);
	unk_0x8B438725D591ED78(0, 116, 1);
	unk_0x8B438725D591ED78(0, 117, 1);
	unk_0x8B438725D591ED78(0, 118, 1);
	unk_0x8B438725D591ED78(0, 119, 1);
	unk_0x8B438725D591ED78(0, 352, 1);
	unk_0x8B438725D591ED78(0, 131, 1);
	unk_0x8B438725D591ED78(0, 132, 1);
	unk_0x8B438725D591ED78(0, 123, 1);
	unk_0x8B438725D591ED78(0, 126, 1);
	unk_0x8B438725D591ED78(0, 129, 1);
	unk_0x8B438725D591ED78(0, 130, 1);
	unk_0x8B438725D591ED78(0, 133, 1);
	unk_0x8B438725D591ED78(0, 134, 1);
	unk_0x6DDC89A03EBEF23F();
	func_111(iParam0);
	if ((unk_0xA5E11AF0A2B928C1() - Global_29) > 500)
	{
		unk_0xC8927C3AD7C5D2E1(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xA5E11AF0A2B928C1();
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0x2655A8EC638E4FD1(unk_0xDC58AE028CB223BA(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_111(int iParam0)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0xB9F391F7A44CA06F(iParam0))
		{
			if (unk_0xB91CBB2DE81AA576(iParam0))
			{
				unk_0x17F94CF179685573(iParam0, 0);
			}
		}
	}
}

void func_112(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_119(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_50())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_118(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_119(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_118(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_116(unk_0x93E99A2DBCBA9CFA())) && !func_114(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_113()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_116(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_113()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_114(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_115(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			bVar0 = unk_0x4292F1DE8BA2D22E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_115(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_73();
	}
	if (Global_1575040[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_116(int iParam0)
{
	if (func_114(iParam0, 0))
	{
		return 1;
	}
	if (func_117())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_117()
{
	return BitTest(Global_2621446, 3);
}

int func_118(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && uParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_119(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 13);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 13);
	}
}

int func_120()
{
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (func_165())
		{
			return 1;
		}
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x45C0F56FBD8A5C1A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
		{
			return 0;
		}
		iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (bParam0)
		{
			if (unk_0x055111B11E6624FD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x055111B11E6624FD(iVar0, 0))
			{
				if (unk_0xA66E176E5772E965(iVar0, -1, 0) != unk_0xC1A5EC5C986B98AD())
				{
					return 0;
				}
			}
		}
		if (!unk_0x055111B11E6624FD(iVar0, 0))
		{
			if (unk_0x38B6CF1EE3FC9BC1(iVar0) < 0.95f || unk_0x38B6CF1EE3FC9BC1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (!unk_0xF66F9ECA31DB2AB0(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

bool func_122(int iParam0)
{
	return func_36(func_123(iParam0));
}

char* func_123(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_124(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_125()
{
	func_126();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_126()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_129(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_128(unk_0xC1A5EC5C986B98AD());
			if (func_127(iVar0) && (!func_53(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_127(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_127(int iParam0)
{
	return iParam0 < 3;
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_129(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_129(int iParam0)
{
	if (func_127(iParam0))
	{
		return func_130(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_130(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_131()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 150f, -1, 0, 0);
		unk_0x71A535529C1CA5DF(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_132()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (unk_0x66599E73DBA5A850(iLocal_62))
	{
		return 1;
	}
	else
	{
		if (unk_0x7559C38E6535AB89(iLocal_62, unk_0xC1A5EC5C986B98AD(), 1))
		{
			return 1;
		}
		if (unk_0x612907CF3208D1E3(unk_0x985D9D5ED4D5145A(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x985D9D5ED4D5145A(iLocal_62, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0x985D9D5ED4D5145A(iLocal_62, 31086, 0f, 0f, 0f) };
		if ((unk_0xD18D609DAEB32038(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0xD18D609DAEB32038(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0xD18D609DAEB32038(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x5D9976AAFD4BC43E(unk_0x985D9D5ED4D5145A(iLocal_62, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	if (!unk_0x055111B11E6624FD(iLocal_62, 0))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iLocal_62, 1)) > (fLocal_165 + 50f))
		{
			func_197();
		}
		else if (func_124(func_125()) < iLocal_192)
		{
			func_197();
		}
	}
}

void func_134()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, Global_19, 0, 1, 0))
		{
			unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), iLocal_62, 3000, 0, 2);
			unk_0xEDB03CCB50D11479(iLocal_62, unk_0xC1A5EC5C986B98AD(), 3000, 0, 2);
		}
	}
}

void func_135()
{
	float fVar0;
	
	if (bLocal_90 == 1)
	{
		fVar0 = 13f;
	}
	if (bLocal_90 == 4)
	{
		fVar0 = 5.75f;
	}
	if (bLocal_90 == 1 || bLocal_90 == 4)
	{
		if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_166, Local_169, fVar0, 0, 1, 0))
		{
			if (!iLocal_157)
			{
				if (!unk_0x66599E73DBA5A850(iLocal_62))
				{
					unk_0x06A2A5F6A6959BE7(iLocal_62, unk_0xC1A5EC5C986B98AD(), 0);
					iLocal_157 = 1;
					iLocal_158 = 0;
				}
			}
		}
		if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_172, Local_175, fVar0, 0, 1, 0))
		{
			if (!iLocal_158)
			{
				if (!unk_0x66599E73DBA5A850(iLocal_62))
				{
					unk_0x06A2A5F6A6959BE7(iLocal_62, unk_0xC1A5EC5C986B98AD(), 0);
					iLocal_158 = 1;
					iLocal_157 = 0;
				}
			}
		}
		if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_178, Local_181, fVar0, 0, 1, 0))
		{
			if (!iLocal_159)
			{
				if (!unk_0x66599E73DBA5A850(iLocal_62))
				{
					iLocal_159 = 1;
				}
			}
		}
	}
	if (!iLocal_160)
	{
		if (!unk_0x66599E73DBA5A850(iLocal_62))
		{
			if (unk_0xEAEF747543427AC5(iLocal_62, unk_0xC1A5EC5C986B98AD(), 25f, 25f, 5f, 0, 1, 0) && unk_0xC832FC847E3442DA(iLocal_62, unk_0xC1A5EC5C986B98AD(), 17))
			{
				if (func_42(&uLocal_194, cLocal_103, sLocal_108, 4, 0, 0, 0) || func_62())
				{
					if (!unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "flee_forward_outro_shopkeeper", 3))
					{
						unk_0xDBC7406226B5540E(&uLocal_121);
						unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
						if (iLocal_47 == 2)
						{
							unk_0x3EE48ADC8C7F5CC4(0, cLocal_377, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xF2CFC6EC8C85FA78(uLocal_121);
						unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
						unk_0x63EF69C6969A3D26(&uLocal_121);
						iLocal_160 = 1;
					}
				}
			}
		}
	}
}

void func_136(int iParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x66599E73DBA5A850(iParam0))
			{
				unk_0xDBC7406226B5540E(&uLocal_121);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_121);
				unk_0x3D7110D966B0CEA2(iParam0, uLocal_121);
				unk_0x63EF69C6969A3D26(&uLocal_121);
				unk_0xC1B1E9A034A63A62(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x66599E73DBA5A850(iParam0))
			{
				if (unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(iParam0))
			{
				if (!unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_137()
{
	if (unk_0x923599D48C8BCBED(uLocal_191))
	{
		if (!unk_0x055111B11E6624FD(iLocal_62, 0))
		{
			fLocal_165 = unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iLocal_62, 1));
		}
		func_63(joaat("rc_wallets_recovered"), 1);
		unk_0xCA9F34C06A0529CE(0, 200, 250);
		if (unk_0x7DE17ACDD8BA2642(iLocal_64))
		{
			unk_0xEF078F1FEE785D3E(&iLocal_64);
		}
		func_140();
		func_139(&uLocal_392);
		if (unk_0x7DE17ACDD8BA2642(iLocal_62))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_62))
			{
				unk_0x1B58D923DDA17255(iLocal_62, 0);
			}
		}
		func_145(0);
		unk_0x7E131AB8520C5824(uLocal_191);
		if (!iLocal_56)
		{
			iLocal_48 = 5;
			func_138(2);
		}
		else
		{
			iLocal_48 = 12;
		}
	}
}

void func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_12(func_123(iParam0), -1);
					Global_113648.f_24997.f_2++;
					unk_0xECDAB41968FF21A8(&Global_113644, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113644, 1))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_12(func_123(iParam0), -1);
					Global_113648.f_24997.f_3++;
					unk_0xECDAB41968FF21A8(&Global_113644, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113644, 2))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_12(func_123(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0xECDAB41968FF21A8(&Global_113644, 2);
				}
			}
			break;
	}
}

void func_139(var uParam0)
{
	*uParam0 = -99;
}

void func_140()
{
	iLocal_67 = 0;
	if (!unk_0xCE4AAA035282336C(iLocal_65))
	{
		if (!unk_0x055111B11E6624FD(iLocal_62, 0))
		{
			iLocal_65 = func_141(iLocal_62, 0, 0);
		}
	}
}

int func_141(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_142(iParam0, bParam1, 145);
}

int func_142(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_143(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(iVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_143(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_144(unk_0xA26A9A07F761D8F8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
		}
		else
		{
			unk_0x1886753DA39F38F8(iVar0, 2);
		}
	}
	else if (unk_0x71904BD37B848CAF(iParam0))
	{
		unk_0x225EB85DBC38E707(iVar0, func_144(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(iVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(iVar0, func_144(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_144(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_145(bool bParam0)
{
	if (!unk_0x66599E73DBA5A850(iLocal_62) && bLocal_90 == 4)
	{
		if (unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
			if (bParam0)
			{
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x909F139DC199D8E0(iLocal_62);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
	}
}

int func_146()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_64))
	{
		if (unk_0xDC116D955A63BDBE(iLocal_64))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_62))
			{
				if (unk_0x836874EEF89A8AC0(iLocal_64, iLocal_62))
				{
					if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 18f, 18f, 18f, 0, 1, 0))
					{
						if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_147(int iParam0, var uParam1)
{
	if (unk_0xCE4AAA035282336C(uParam0))
	{
		if (unk_0xA5E11AF0A2B928C1() > *uParam1 + 500)
		{
			if (unk_0xBA7A86088686EEAA(iParam0) == 1)
			{
				unk_0x3BCF1F6A3573A1DF(iParam0, true);
			}
			else
			{
				unk_0x3BCF1F6A3573A1DF(iParam0, false);
				unk_0x1886753DA39F38F8(iParam0, 1);
			}
			*uParam1 = unk_0xA5E11AF0A2B928C1();
		}
		if (!unk_0xF0E4B64AC0B5660E() && func_148(0))
		{
			func_138(1);
		}
	}
}

var func_148(int iParam0)
{
	return BitTest(Global_113644, iParam0);
}

void func_149()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 8f, 8f, 18f, 0, 1, 0) || unk_0x865259F0333CAA4B(iLocal_62))
		{
			unk_0x8581263F2F024518();
		}
	}
}

void func_150()
{
	if (unk_0xCE4AAA035282336C(iLocal_66))
	{
		unk_0x45533C09A6C9B409(&iLocal_66);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_64))
	{
		if (unk_0xDC116D955A63BDBE(iLocal_64))
		{
			unk_0xA81AA70A4D25E140(iLocal_64, 1, 1);
			unk_0xEF078F1FEE785D3E(&iLocal_64);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!unk_0x66599E73DBA5A850(iLocal_63))
	{
		if (func_42(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_62())
		{
			if (iLocal_47 == 2)
			{
				unk_0x474AA9EF29305EA8(iLocal_63, 128, 1);
				unk_0x474AA9EF29305EA8(iLocal_63, 2, 1);
				unk_0x474AA9EF29305EA8(iLocal_63, 1, 0);
				unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
			}
			unk_0x71A535529C1CA5DF(iLocal_63, 1);
		}
	}
}

int func_151()
{
	if (!unk_0x055111B11E6624FD(iLocal_63, 0))
	{
		if (unk_0x7559C38E6535AB89(iLocal_63, unk_0xC1A5EC5C986B98AD(), 1))
		{
			if (bLocal_149)
			{
				return 1;
			}
		}
	}
	else if (bLocal_149)
	{
		return 1;
	}
	return 0;
}

void func_152()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		unk_0x909F139DC199D8E0(iLocal_62);
		unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
		unk_0x71A535529C1CA5DF(iLocal_62, 1);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x1EEF71E3CDD868D3(&iLocal_62);
	}
	if (!unk_0x66599E73DBA5A850(iLocal_63))
	{
		func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
		unk_0xDBC7406226B5540E(&uLocal_121);
		unk_0x1F9F6C767BE640D5(0);
		unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
		unk_0xF2CFC6EC8C85FA78(uLocal_121);
		unk_0x3D7110D966B0CEA2(iLocal_63, uLocal_121);
		unk_0x63EF69C6969A3D26(&uLocal_121);
		unk_0x71A535529C1CA5DF(iLocal_63, 1);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x351E6B9FD37CFF33(iLocal_63, 0, 1);
		unk_0x1EEF71E3CDD868D3(&iLocal_63);
	}
}

int func_153()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0x48A4D45B3B4CEFFD(iLocal_62))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(var uParam0)
{
	return func_155(uParam0);
}

int func_155(var uParam0)
{
	var uVar0;
	
	if (!unk_0x0E0433D7F75E162D(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x76C6595450F90E77(uParam0);
	unk_0x225EB85DBC38E707(uVar0, func_144(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	return iVar0;
}

int func_156()
{
	if (unk_0x0E0433D7F75E162D(uLocal_191))
	{
		if (unk_0xC6695AB241B15DEF(uLocal_191))
		{
			if (unk_0x7DE17ACDD8BA2642(iLocal_63))
			{
				if (!unk_0x055111B11E6624FD(iLocal_63, 0))
				{
					if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_63, 18f, 18f, 18f, 0, 1, 0) || unk_0x7559C38E6535AB89(iLocal_63, unk_0xC1A5EC5C986B98AD(), 1))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_143 = 1;
							return 1;
						}
					}
				}
				if (func_157())
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_143 = 2;
					return 1;
				}
				if (unk_0x66599E73DBA5A850(iLocal_63))
				{
					if (unk_0x7559C38E6535AB89(iLocal_63, unk_0xC1A5EC5C986B98AD(), 1))
					{
						if (unk_0x7DE17ACDD8BA2642(iLocal_62))
						{
							if (!unk_0x66599E73DBA5A850(iLocal_62))
							{
								unk_0x909F139DC199D8E0(iLocal_62);
								unk_0x1B58D923DDA17255(iLocal_62, 0);
							}
						}
						unk_0x5AE11BC36633DE4E(0);
						iLocal_143 = 2;
						return 1;
					}
				}
				else if (unk_0x7559C38E6535AB89(iLocal_63, unk_0xC1A5EC5C986B98AD(), 1))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_143 = 2;
					if (unk_0x7DE17ACDD8BA2642(iLocal_62))
					{
						if (!unk_0x66599E73DBA5A850(iLocal_62))
						{
							unk_0x909F139DC199D8E0(iLocal_62);
							unk_0x1B58D923DDA17255(iLocal_62, 0);
						}
					}
					if (!unk_0x66599E73DBA5A850(iLocal_63))
					{
						unk_0x909F139DC199D8E0(iLocal_63);
						unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
						unk_0x71A535529C1CA5DF(iLocal_63, 1);
						unk_0x351E6B9FD37CFF33(iLocal_63, 0, 1);
						unk_0x1EEF71E3CDD868D3(&iLocal_63);
					}
					return 1;
				}
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_62))
			{
				if (!unk_0x055111B11E6624FD(iLocal_62, 0))
				{
					if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
						{
							if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_62) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_62))
							{
								unk_0x5AE11BC36633DE4E(0);
								iLocal_143 = 3;
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_157()
{
	if (!unk_0x66599E73DBA5A850(iLocal_63))
	{
		if (unk_0x85D2845BAE56DBF8(iLocal_63, unk_0xC1A5EC5C986B98AD()) && unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_63, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
			{
				if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_63) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_63))
				{
					return 1;
				}
			}
		}
		if (unk_0x23AE149202140E10(unk_0xC1A5EC5C986B98AD()))
		{
			return 1;
		}
		if (unk_0x48A4D45B3B4CEFFD(iLocal_63))
		{
			return 1;
		}
	}
	return 0;
}

void func_158()
{
	if (iLocal_58)
	{
		if (!iLocal_59)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_63))
			{
				if (unk_0x2D1125ABF6C8F8C4(iLocal_63, 4))
				{
					if ((func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0) || func_62()) || func_62())
					{
						iLocal_59 = 1;
					}
				}
				else if ((func_42(&uLocal_194, cLocal_103, sLocal_107, 4, 0, 0, 0) || func_62()) || func_62())
				{
					iLocal_59 = 1;
				}
			}
		}
	}
	else if (func_157())
	{
		if ((func_42(&uLocal_194, cLocal_103, sLocal_116, 4, 0, 0, 0) || func_62()) || func_62())
		{
			if (unk_0x2D1125ABF6C8F8C4(iLocal_63, 4))
			{
				unk_0xCAC2B0C65B18E755(iLocal_63, unk_0xC1A5EC5C986B98AD(), 0, 16);
			}
			else
			{
				func_150();
			}
			iLocal_58 = 1;
		}
	}
}

int func_159()
{
	int iVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 7))
		{
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_62) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_62))
				{
					return 1;
				}
			}
		}
		if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0xE0AC9A4743F9BD05(iLocal_62, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (unk_0x7559C38E6535AB89(iLocal_62, unk_0xC1A5EC5C986B98AD(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x612907CF3208D1E3(unk_0x985D9D5ED4D5145A(iLocal_62, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_160()
{
	if (iLocal_47 == 2)
	{
	}
	if (!func_165())
	{
		if (unk_0x83666F9FB8FEBD4B() > 10000)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_62))
			{
				if (!unk_0x70ACD9400516DB25(iLocal_62))
				{
					func_161(iLocal_62, "GENERIC_CURSE_MED", 24);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
	}
	if (!bLocal_60)
	{
		if (func_38(unk_0xC1A5EC5C986B98AD(), iLocal_63, 1) > 200f)
		{
			if (!unk_0x865259F0333CAA4B(iLocal_63) || unk_0xDB08595445CDE2FF(iLocal_63))
			{
				iLocal_48 = 8;
			}
		}
	}
}

void func_161(int iParam0, char* sParam1, int iParam2)
{
	unk_0x824D23CC0FE1835A(iParam0, sParam1, func_162(iParam2), 1);
}

int func_162(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_163()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (!bLocal_53)
		{
			if (unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "flee_backward_loop_shopkeeper", 3))
			{
				unk_0xDBC7406226B5540E(&uLocal_121);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_121);
				unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
				unk_0x63EF69C6969A3D26(&uLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else if (unk_0x7BB3D8F4F6310EB8(iLocal_62, cLocal_359, "flee_forward_loop_shopkeeper", 3))
			{
				unk_0xDBC7406226B5540E(&uLocal_121);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_121);
				unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
				unk_0x63EF69C6969A3D26(&uLocal_121);
				iLocal_164 = 3;
				bLocal_53 = true;
			}
			else
			{
				bLocal_53 = true;
			}
		}
		if (bLocal_53)
		{
			if (!iLocal_136)
			{
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 7f, 7f, 7f, 0, 1, 0))
				{
					if (unk_0xF5F493B789EA063E(iLocal_62, joaat("script_task_perform_sequence")) == 1)
					{
						if (unk_0xD64D855C3A010BF0(iLocal_62) == iLocal_164)
						{
							unk_0xEDB03CCB50D11479(iLocal_62, unk_0xC1A5EC5C986B98AD(), 9000, 0, 2);
							func_42(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
							bLocal_155 = true;
							iLocal_136 = 1;
						}
					}
					else
					{
						unk_0x57B1A0850EB7F1F4(iLocal_62, 1);
						func_42(&uLocal_194, cLocal_103, sLocal_106, 4, 0, 0, 0);
						unk_0xDBC7406226B5540E(&uLocal_121);
						unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 7000, 0, 2);
						unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 7000);
						unk_0xF2CFC6EC8C85FA78(uLocal_121);
						unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
						unk_0x63EF69C6969A3D26(&uLocal_121);
						unk_0xC1B1E9A034A63A62(0);
						bLocal_155 = true;
						iLocal_136 = 1;
					}
				}
			}
		}
	}
}

int func_164()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_166()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (!bLocal_134)
		{
			iLocal_138 = unk_0xA5E11AF0A2B928C1();
			bLocal_134 = true;
		}
		if (bLocal_134)
		{
			iLocal_139 = unk_0xA5E11AF0A2B928C1();
			if (!iLocal_54)
			{
				if ((iLocal_139 - iLocal_138) > 500)
				{
					if (!func_165())
					{
						if (func_42(&uLocal_194, cLocal_103, sLocal_105, 4, 0, 0, 0) || func_62())
						{
							if (iLocal_47 == 2)
							{
								if (!unk_0x66599E73DBA5A850(iLocal_62))
								{
									if (!unk_0x66599E73DBA5A850(iLocal_63))
									{
									}
								}
							}
							if (iLocal_47 == 1)
							{
								if (!unk_0x66599E73DBA5A850(iLocal_62))
								{
								}
							}
							if (unk_0xCE4AAA035282336C(iLocal_65))
							{
								unk_0x45533C09A6C9B409(&iLocal_65);
							}
							iLocal_54 = 1;
						}
					}
				}
			}
		}
	}
}

void func_167()
{
	float fVar0;
	
	if (!bLocal_55)
	{
		if (bLocal_90 == 1)
		{
			fVar0 = 1f;
		}
		if (bLocal_90 == 2)
		{
			fVar0 = 4f;
		}
		if (bLocal_90 != 2)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_62) && !unk_0x66599E73DBA5A850(iLocal_63))
			{
				if (!func_194())
				{
					if (func_181())
					{
						func_278();
					}
				}
				if (func_180())
				{
					if (!unk_0xCE4AAA035282336C(uLocal_68))
					{
						if (!unk_0x055111B11E6624FD(iLocal_63, 0))
						{
							iLocal_68 = func_141(iLocal_63, 1, 0);
						}
						func_172(1);
					}
				}
				if (func_171())
				{
					func_170();
					if (bLocal_90 == 3)
					{
						if (!iLocal_57)
						{
							unk_0xDBC7406226B5540E(&uLocal_121);
							unk_0xEDB03CCB50D11479(0, iLocal_63, 16000, 0, 2);
							unk_0x7D9A648CC1936BDA(0, Local_87, 1f, 20000, fVar0, 4, 1193033728);
							unk_0xF2CFC6EC8C85FA78(uLocal_121);
							unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
							unk_0x63EF69C6969A3D26(&uLocal_121);
							iLocal_57 = 1;
						}
						unk_0xDBC7406226B5540E(&uLocal_121);
						unk_0xEDB03CCB50D11479(0, iLocal_62, -1, 0, 2);
						unk_0x3EE48ADC8C7F5CC4(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						unk_0xA930436FB34B9690(0, Local_87, iLocal_62, 1f, 0, 1.5f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0xFD42C7B0CE08BA68(0, iLocal_62, -1, 1);
						unk_0xF2CFC6EC8C85FA78(uLocal_121);
						unk_0x3D7110D966B0CEA2(iLocal_63, uLocal_121);
						unk_0x63EF69C6969A3D26(&uLocal_121);
						unk_0xC1B1E9A034A63A62(0);
						bLocal_55 = true;
						unk_0xFF2AF80F9EC7704C(0f);
					}
					else
					{
						if (bLocal_90 == 1)
						{
							sLocal_111 = sLocal_111;
						}
						func_169();
						bLocal_55 = true;
						bLocal_149 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
				}
			}
		}
	}
	if (bLocal_55)
	{
		if (!iLocal_135)
		{
			if (unk_0x83666F9FB8FEBD4B() > 1000)
			{
				if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_63, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!unk_0x055111B11E6624FD(iLocal_62, 0))
					{
						unk_0x06A2A5F6A6959BE7(iLocal_62, iLocal_63, 0);
					}
					iLocal_135 = 1;
				}
				else
				{
					iLocal_135 = 1;
				}
			}
		}
		if (iLocal_135 && !bLocal_133)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_62) && !unk_0x66599E73DBA5A850(iLocal_63))
			{
				if (func_42(&uLocal_194, cLocal_103, sLocal_104, 4, 0, 0, 0) || func_62())
				{
					unk_0x909F139DC199D8E0(iLocal_62);
					unk_0xDBC7406226B5540E(&uLocal_121);
					unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_121);
					unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
					unk_0x63EF69C6969A3D26(&uLocal_121);
					func_170();
					uLocal_191 = unk_0x8D2015F36A52256C(joaat("pickup_money_purse"), unk_0x223044F9F739377D(unk_0x7394CB479CCA24AF(iLocal_62, 0f, 2.5f, 0f), 1067030938, 1069547520), uLocal_144, iLocal_192, 1, iLocal_85);
					bLocal_133 = true;
				}
			}
		}
		if (bLocal_133)
		{
			if (unk_0x66599E73DBA5A850(iLocal_63))
			{
				func_168();
			}
			else
			{
				switch (iLocal_667)
				{
					case 0:
						Local_670 = { unk_0x55AE93A6E3B0AE8F(uLocal_191) - Vector(0f, 0f, 0.75f) };
						if (unk_0xC6695AB241B15DEF(uLocal_191))
						{
							unk_0x909F139DC199D8E0(iLocal_63);
							unk_0xDBC7406226B5540E(&uLocal_121);
							unk_0xA930436FB34B9690(0, Local_670, iLocal_62, 2f, 0, 0.1f, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							unk_0xF2CFC6EC8C85FA78(uLocal_121);
							unk_0x3D7110D966B0CEA2(iLocal_63, uLocal_121);
							unk_0x63EF69C6969A3D26(&uLocal_121);
							iLocal_668 = unk_0xA5E11AF0A2B928C1();
						}
						iLocal_667 = 1;
						break;
					
					case 1:
						if (unk_0xF5F493B789EA063E(iLocal_63, joaat("script_task_perform_sequence")) == 7)
						{
							Local_670 = { unk_0x55AE93A6E3B0AE8F(uLocal_191) - Vector(0f, 0f, 0.75f) };
							if (unk_0xC6695AB241B15DEF(uLocal_191))
							{
								if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iLocal_63, 1), Local_670, 1) > 1f)
								{
									iLocal_669 = 1;
									iLocal_667 = 4;
								}
								else
								{
									unk_0x909F139DC199D8E0(iLocal_63);
									unk_0xDBC7406226B5540E(&uLocal_121);
									unk_0x3EE48ADC8C7F5CC4(0, cLocal_360, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									unk_0xF2CFC6EC8C85FA78(uLocal_121);
									unk_0x3D7110D966B0CEA2(iLocal_63, uLocal_121);
									unk_0x63EF69C6969A3D26(&uLocal_121);
									iLocal_667 = 2;
								}
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						if ((unk_0xA5E11AF0A2B928C1() - iLocal_668) > 15000)
						{
							iLocal_669 = 1;
							iLocal_667 = 4;
						}
						break;
					
					case 2:
						if (unk_0x92377426879E21FF(iLocal_63, cLocal_360, "pickup_low") > 0.5f)
						{
							if (unk_0xC6695AB241B15DEF(uLocal_191))
							{
								unk_0x7E131AB8520C5824(uLocal_191);
								iLocal_667 = 3;
							}
							else
							{
								iLocal_667 = 4;
							}
						}
						break;
					
					case 3:
						if ((unk_0x7BB3D8F4F6310EB8(iLocal_63, cLocal_360, "pickup_low", 3) && unk_0x92377426879E21FF(iLocal_63, cLocal_360, "pickup_low") > 0.58f) || !unk_0x7BB3D8F4F6310EB8(iLocal_63, cLocal_360, "pickup_low", 3))
						{
							iLocal_667 = 4;
						}
						break;
					
					case 4:
						unk_0x351E6B9FD37CFF33(iLocal_63, 1, 1);
						unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 50f, -1, 0, 0);
						unk_0xBB6027D1D193CBA6(iLocal_63, 0, 0);
						bLocal_149 = true;
						break;
					}
				}
			}
	}
}

void func_168()
{
	if (unk_0xCE4AAA035282336C(iLocal_65))
	{
		unk_0x45533C09A6C9B409(&iLocal_65);
	}
	if (!unk_0xCE4AAA035282336C(iLocal_67))
	{
		if (unk_0x0E0433D7F75E162D(uLocal_191))
		{
			iLocal_67 = func_154(uLocal_191);
		}
	}
	iLocal_48 = 4;
}

void func_169()
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
	}
	if (unk_0xD495130AEF425591(iLocal_63, unk_0xC1A5EC5C986B98AD(), 90f))
	{
		unk_0x3EE48ADC8C7F5CC4(iLocal_63, cLocal_359, sLocal_367, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
		else if (bLocal_90 == 4)
		{
			iLocal_379 = unk_0xCE17E20C49A29678(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
		else
		{
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
	}
	else
	{
		unk_0x3EE48ADC8C7F5CC4(iLocal_63, cLocal_359, sLocal_369, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_47 == 2)
		{
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, sLocal_370, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			unk_0x195020A03AE6C628(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
		else if (bLocal_90 == 4)
		{
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
		else
		{
			unk_0xDBC7406226B5540E(&uLocal_121);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, sLocal_370, 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x3EE48ADC8C7F5CC4(0, cLocal_359, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_121);
			unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
			unk_0x63EF69C6969A3D26(&uLocal_121);
		}
	}
}

void func_170()
{
	if (unk_0xCE4AAA035282336C(iLocal_68))
	{
		unk_0x45533C09A6C9B409(&iLocal_68);
	}
	if (!unk_0xCE4AAA035282336C(iLocal_66))
	{
		if (!unk_0x055111B11E6624FD(iLocal_63, 0))
		{
			iLocal_66 = func_141(iLocal_63, 1, 0);
		}
	}
}

int func_171()
{
	int iVar0;
	
	iVar0 = 0;
	if (bLocal_90 == 1)
	{
		if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_90 == 2)
	{
		if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iLocal_63, 1), 1) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_90 == 4)
	{
		if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_172(int iParam0)
{
	if (func_174())
	{
		Global_113638 = 1;
		Global_113635 = unk_0xA5E11AF0A2B928C1();
		if (func_173(Global_113637))
		{
			func_138(0);
		}
		unk_0x97DBA2AA6C70AFC7(1, "RE_TITLE");
		if (iParam0 && func_173(Global_113637))
		{
			unk_0x01680CFD15C1C85D();
		}
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_174()
{
	switch (func_175(&Global_32223, 0, 5, 0, unk_0xAF908D5E2416DA93()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_175(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98159.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_179(0))
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		unk_0xA7225B88CE344621(unk_0x5DC3DCA82C806319(), 0);
		Global_23131.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xDAD6345C5D317E79(8);
		}
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43218)
			{
				if (Global_43224[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_177(iParam2))
		{
			return 0;
		}
		if (Global_43218 == 8)
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218++;
		if (iParam4 != 0)
		{
			func_176(uParam0, iParam4);
		}
	}
	return 2;
}

void func_176(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43218 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43218)
	{
		if (Global_43224[iVar0 /*4*/] == *uParam0)
		{
			Global_43224[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_177(int iParam0)
{
	return func_178(iParam0, Global_43257);
}

int func_178(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_177(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_180()
{
	int iVar0;
	
	iVar0 = 0;
	if (bLocal_90 == 1)
	{
		if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_90 == 2)
	{
		if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_90 == 3)
	{
		if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_181()
{
	if (!func_177(5))
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_189())
		{
			return 0;
		}
	}
	if (func_182(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_182(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (func_127(func_125()))
		{
			iVar36 = func_188();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113648.f_18576[iVar32 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar32 /*6*/], 3))
				{
					func_183(iVar32, &Var0);
					fVar35 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_183(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_184(uParam1, "Abigail1", func_186(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 1:
			func_184(uParam1, "Abigail2", func_186(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 2:
			func_184(uParam1, "Barry1", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 3:
			func_184(uParam1, "Barry2", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 4:
			func_184(uParam1, "Barry3", func_186(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 5:
			func_184(uParam1, "Barry3A", func_186(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 6:
			func_184(uParam1, "Barry3C", func_186(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 7:
			func_184(uParam1, "Barry4", func_186(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_185(iParam0), 0, 0);
			break;
		
		case 8:
			func_184(uParam1, "Dreyfuss1", func_186(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 9:
			func_184(uParam1, "Epsilon1", func_186(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 10:
			func_184(uParam1, "Epsilon2", func_186(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 11:
			func_184(uParam1, "Epsilon3", func_186(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 12:
			func_184(uParam1, "Epsilon4", func_186(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 13:
			func_184(uParam1, "Epsilon5", func_186(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 14:
			func_184(uParam1, "Epsilon6", func_186(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 15:
			func_184(uParam1, "Epsilon7", func_186(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 16:
			func_184(uParam1, "Epsilon8", func_186(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 17:
			func_184(uParam1, "Extreme1", func_186(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 18:
			func_184(uParam1, "Extreme2", func_186(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 19:
			func_184(uParam1, "Extreme3", func_186(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 20:
			func_184(uParam1, "Extreme4", func_186(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 21:
			func_184(uParam1, "Fanatic1", func_186(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_185(iParam0), 1, 0);
			break;
		
		case 22:
			func_184(uParam1, "Fanatic2", func_186(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_185(iParam0), 1, 0);
			break;
		
		case 23:
			func_184(uParam1, "Fanatic3", func_186(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_185(iParam0), 0, 1);
			break;
		
		case 24:
			func_184(uParam1, "Hao1", func_186(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_185(iParam0), 0, 1);
			break;
		
		case 25:
			func_184(uParam1, "Hunting1", func_186(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 26:
			func_184(uParam1, "Hunting2", func_186(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 27:
			func_184(uParam1, "Josh1", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 28:
			func_184(uParam1, "Josh2", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 29:
			func_184(uParam1, "Josh3", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 30:
			func_184(uParam1, "Josh4", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 31:
			func_184(uParam1, "Maude1", func_186(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 32:
			func_184(uParam1, "Minute1", func_186(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 33:
			func_184(uParam1, "Minute2", func_186(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 34:
			func_184(uParam1, "Minute3", func_186(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 35:
			func_184(uParam1, "MrsPhilips1", func_186(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 36:
			func_184(uParam1, "MrsPhilips2", func_186(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 37:
			func_184(uParam1, "Nigel1", func_186(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 38:
			func_184(uParam1, "Nigel1A", func_186(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 39:
			func_184(uParam1, "Nigel1B", func_186(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 40:
			func_184(uParam1, "Nigel1C", func_186(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 41:
			func_184(uParam1, "Nigel1D", func_186(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
		
		case 42:
			func_184(uParam1, "Nigel2", func_186(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 43:
			func_184(uParam1, "Nigel3", func_186(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
		
		case 44:
			func_184(uParam1, "Omega1", func_186(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 45:
			func_184(uParam1, "Omega2", func_186(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 46:
			func_184(uParam1, "Paparazzo1", func_186(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 47:
			func_184(uParam1, "Paparazzo2", func_186(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 48:
			func_184(uParam1, "Paparazzo3", func_186(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 49:
			func_184(uParam1, "Paparazzo3A", func_186(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 50:
			func_184(uParam1, "Paparazzo3B", func_186(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 51:
			func_184(uParam1, "Paparazzo4", func_186(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 52:
			func_184(uParam1, "Rampage1", func_186(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 54:
			func_184(uParam1, "Rampage3", func_186(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 55:
			func_184(uParam1, "Rampage4", func_186(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 56:
			func_184(uParam1, "Rampage5", func_186(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
		
		case 53:
			func_184(uParam1, "Rampage2", func_186(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
		
		case 57:
			func_184(uParam1, "TheLastOne", func_186(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 58:
			func_184(uParam1, "Tonya1", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 59:
			func_184(uParam1, "Tonya2", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 60:
			func_184(uParam1, "Tonya3", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 61:
			func_184(uParam1, "Tonya4", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		case 62:
			func_184(uParam1, "Tonya5", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_184(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_186(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_187(iParam0) };
	if (unk_0x2AC37494BBF1DB16(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_187(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_188()
{
	func_126();
	switch (Global_113648.f_2365.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_189()
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x27654E358E874F45() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_190()
{
	if (func_193() && !func_189())
	{
		return 1;
	}
	if (func_192() && func_191())
	{
		return 1;
	}
	return 0;
}

bool func_191()
{
	return Global_113366 > 0;
}

int func_192()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_194()
{
	if ((Global_113637 == func_195() && unk_0xA847A0F368810680()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x688846D56810779A(), 64);
	uVar16 = func_196(Var0);
	return uVar16;
}

int func_196(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x14580F20CBCE4FA9(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_197()
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		unk_0xA3F7AA17806EB0A8(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	}
	func_296(25, bLocal_90);
	func_201();
	func_198();
	func_278();
}

void func_198()
{
	func_199();
}

int func_199()
{
	if (func_200(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_200(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_201()
{
	return 1;
}

void func_202(int iParam0)
{
	Global_113634 = iParam0;
}

void func_203()
{
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0x66599E73DBA5A850(iLocal_63))
			{
				unk_0x3EE48ADC8C7F5CC4(iLocal_63, cLocal_359, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!unk_0x66599E73DBA5A850(iLocal_62))
			{
				unk_0x3EE48ADC8C7F5CC4(iLocal_62, cLocal_361, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_140++;
			break;
		
		case 1:
			if (unk_0x7DE17ACDD8BA2642(iLocal_63))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_63))
				{
					if (func_180())
					{
						if (!unk_0xCE4AAA035282336C(iLocal_68))
						{
							if (!unk_0x055111B11E6624FD(iLocal_63, 0))
							{
								iLocal_68 = func_141(iLocal_63, 1, 0);
							}
							if (!func_194())
							{
								func_172(1);
							}
						}
					}
					if (func_171())
					{
						func_42(&uLocal_194, cLocal_103, "REMG2_ARG", 4, 0, 0, 0);
						func_170();
						iLocal_187 = unk_0xA5E11AF0A2B928C1();
						unk_0xFF2AF80F9EC7704C(0f);
						iLocal_190 = 1;
						iLocal_140++;
					}
				}
				else if (!unk_0x66599E73DBA5A850(iLocal_62))
				{
					unk_0xCF302B47D4B347F1(iLocal_62, Local_145, 250f, -1, 0, 0);
					unk_0x71A535529C1CA5DF(iLocal_62, 1);
					unk_0x4EDE34FBADD967A6(0);
					func_209();
				}
			}
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (func_208())
				{
					iLocal_140 = 4;
				}
				if (func_157())
				{
					iLocal_140 = 9;
				}
				if (func_207())
				{
					iLocal_140 = 6;
				}
				if (func_206())
				{
					iLocal_140 = 4;
				}
			}
			if (!func_194())
			{
				if (func_181())
				{
					func_278();
				}
			}
			break;
		
		case 2:
			if (unk_0x7DE17ACDD8BA2642(iLocal_63))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_63))
				{
					if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_63, 6f, 6f, 15f, 0, 1, 0))
					{
						if (unk_0x85D2845BAE56DBF8(iLocal_63, unk_0xC1A5EC5C986B98AD()) || unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_63, 3f, 3f, 15f, 0, 1, 0))
						{
							if (unk_0xD495130AEF425591(unk_0xC1A5EC5C986B98AD(), iLocal_63, 65f))
							{
								iLocal_189 = unk_0xA5E11AF0A2B928C1();
								unk_0xEDB03CCB50D11479(iLocal_63, unk_0xC1A5EC5C986B98AD(), 7000, 0, 2);
								func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
								iLocal_140++;
							}
							else
							{
								iLocal_189 = unk_0xA5E11AF0A2B928C1();
								unk_0xEDB03CCB50D11479(iLocal_63, unk_0xC1A5EC5C986B98AD(), 7000, 0, 2);
								func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
								unk_0x5AE11BC36633DE4E(0);
								iLocal_140++;
							}
						}
					}
				}
			}
			if (func_208() || func_206())
			{
				iLocal_140 = 4;
			}
			if (func_157())
			{
				iLocal_140 = 9;
			}
			if (func_207())
			{
				iLocal_140 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_188 - iLocal_189) > 12500)
			{
				if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
				{
					iLocal_140 = 4;
				}
			}
			if ((iLocal_188 - iLocal_189) > 5500)
			{
				if (!bLocal_137)
				{
					if (unk_0x7DE17ACDD8BA2642(iLocal_63))
					{
						if (!unk_0x66599E73DBA5A850(iLocal_63))
						{
							func_42(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							unk_0xCAC2B0C65B18E755(iLocal_63, unk_0xC1A5EC5C986B98AD(), 0, 16);
							bLocal_137 = true;
							if (unk_0x7DE17ACDD8BA2642(iLocal_62))
							{
								if (!unk_0x66599E73DBA5A850(iLocal_62))
								{
									unk_0xCF302B47D4B347F1(iLocal_62, Local_145, 250f, -1, 0, 0);
									unk_0x71A535529C1CA5DF(iLocal_62, 1);
									unk_0x4EDE34FBADD967A6(0);
								}
								if (!unk_0x66599E73DBA5A850(iLocal_62))
								{
								}
								if (unk_0xCE4AAA035282336C(iLocal_65))
								{
									unk_0x45533C09A6C9B409(&iLocal_65);
								}
							}
						}
					}
				}
			}
			if (bLocal_137)
			{
				iLocal_140 = 10;
			}
			else
			{
				if (func_208())
				{
					iLocal_140 = 4;
				}
				if (func_157())
				{
					iLocal_140 = 9;
				}
				if (func_207())
				{
					iLocal_140 = 6;
				}
				if (func_205())
				{
					iLocal_140 = 9;
				}
				if (func_206())
				{
					iLocal_140 = 4;
				}
			}
			break;
		
		case 10:
			if (unk_0x7DE17ACDD8BA2642(iLocal_63))
			{
				if (unk_0x66599E73DBA5A850(iLocal_63) || func_38(unk_0xC1A5EC5C986B98AD(), iLocal_63, 1) > 100f)
				{
					func_204();
					func_209();
				}
			}
			break;
		
		case 4:
			if (unk_0x7DE17ACDD8BA2642(iLocal_62))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_62))
				{
					if (!unk_0x7559C38E6535AB89(iLocal_62, unk_0xC1A5EC5C986B98AD(), 1))
					{
						unk_0x909F139DC199D8E0(iLocal_62);
						if (!unk_0x66599E73DBA5A850(iLocal_63))
						{
							unk_0xDBC7406226B5540E(&uLocal_121);
							unk_0xCF302B47D4B347F1(0, unk_0x30BE8A934C020461(iLocal_63, 0), 150f, -1, 0, 0);
							unk_0xF2CFC6EC8C85FA78(uLocal_121);
							unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
							unk_0x63EF69C6969A3D26(&uLocal_121);
							unk_0x71A535529C1CA5DF(iLocal_62, 1);
						}
						iLocal_148 = 1;
					}
					else
					{
						unk_0x909F139DC199D8E0(iLocal_62);
						unk_0xC6C9BF71106ABCAC(iLocal_62, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
						unk_0x71A535529C1CA5DF(iLocal_62, 1);
						if (unk_0xCE4AAA035282336C(iLocal_65))
						{
							unk_0x45533C09A6C9B409(&iLocal_65);
						}
					}
				}
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_63))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_63))
				{
					unk_0x909F139DC199D8E0(iLocal_63);
					unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
					unk_0x71A535529C1CA5DF(iLocal_63, 1);
					if (unk_0xCE4AAA035282336C(iLocal_66))
					{
						unk_0x45533C09A6C9B409(&iLocal_66);
					}
				}
			}
			if (unk_0x0DCB385165FDE763())
			{
				func_108();
			}
			unk_0x4EDE34FBADD967A6(0);
			if (!iLocal_148)
			{
				if (!unk_0x66599E73DBA5A850(iLocal_63))
				{
					func_42(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_278();
			}
			break;
		
		case 5:
			if (unk_0xC9D9444186B5A374() > 250)
			{
				if (unk_0x7DE17ACDD8BA2642(iLocal_63))
				{
					if (!unk_0x66599E73DBA5A850(iLocal_63))
					{
						unk_0x7FE5E05BE63F6CB8(iLocal_63, 17, 1);
						unk_0x992BB708B4B7A005(iLocal_63, 156, 1);
						unk_0xDBC7406226B5540E(&uLocal_121);
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(uLocal_121);
						unk_0x3D7110D966B0CEA2(iLocal_63, uLocal_121);
						unk_0x63EF69C6969A3D26(&uLocal_121);
						unk_0x71A535529C1CA5DF(iLocal_63, 1);
						unk_0x4EDE34FBADD967A6(0);
						unk_0x351E6B9FD37CFF33(iLocal_63, 0, 1);
						unk_0x1EEF71E3CDD868D3(&iLocal_63);
						func_42(&uLocal_194, cLocal_103, sLocal_113, 4, 0, 0, 0);
					}
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_62))
				{
					if (!unk_0x66599E73DBA5A850(iLocal_62))
					{
						if (!unk_0x7559C38E6535AB89(iLocal_62, unk_0xC1A5EC5C986B98AD(), 1))
						{
							unk_0x909F139DC199D8E0(iLocal_62);
							iLocal_148 = 1;
						}
					}
				}
				if (!iLocal_148)
				{
					unk_0x4EDE34FBADD967A6(0);
					func_278();
				}
			}
			break;
		
		case 6:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x7DE17ACDD8BA2642(iLocal_62))
					{
						if (!unk_0x66599E73DBA5A850(iLocal_62))
						{
							unk_0x909F139DC199D8E0(iLocal_62);
							unk_0xDBC7406226B5540E(&uLocal_121);
							unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 10000, 0, 2);
							unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
							unk_0xF2CFC6EC8C85FA78(uLocal_121);
							unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
							unk_0x63EF69C6969A3D26(&uLocal_121);
							unk_0x71A535529C1CA5DF(iLocal_62, 1);
							unk_0x1EEF71E3CDD868D3(&iLocal_62);
						}
					}
					if (unk_0x7DE17ACDD8BA2642(iLocal_63))
					{
						if (!unk_0x66599E73DBA5A850(iLocal_63))
						{
							func_42(&uLocal_194, cLocal_103, sLocal_114, 4, 0, 0, 0);
							unk_0x909F139DC199D8E0(iLocal_63);
							unk_0xDBC7406226B5540E(&uLocal_121);
							unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 10000, 0, 2);
							unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
							unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 250f, -1, 0, 0);
							unk_0xF2CFC6EC8C85FA78(uLocal_121);
							unk_0x3D7110D966B0CEA2(iLocal_63, uLocal_121);
							unk_0x63EF69C6969A3D26(&uLocal_121);
							unk_0x71A535529C1CA5DF(iLocal_63, 1);
						}
					}
				}
				unk_0x4EDE34FBADD967A6(0);
				func_278();
			}
			break;
		
		case 7:
			unk_0xC1B1E9A034A63A62(0);
			iLocal_140++;
			break;
		
		case 8:
			if (unk_0x83666F9FB8FEBD4B() > 200)
			{
				func_209();
			}
			break;
		
		case 9:
			if (unk_0x7DE17ACDD8BA2642(iLocal_63))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_63))
				{
					unk_0x992BB708B4B7A005(iLocal_63, 156, 1);
					unk_0xB7EB8CCA28444BAB(iLocal_63, 50f, 0);
					if (unk_0x0DCB385165FDE763())
					{
						func_108();
					}
					unk_0x4EDE34FBADD967A6(0);
					func_42(&uLocal_194, cLocal_103, sLocal_112, 4, 0, 0, 0);
				}
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_62))
			{
				if (!unk_0x66599E73DBA5A850(iLocal_62))
				{
					unk_0x909F139DC199D8E0(iLocal_62);
					unk_0xA2C73FAE5789EC05(iLocal_62, 2000);
					iLocal_148 = 1;
				}
			}
			break;
	}
	if (iLocal_140 != 8 && iLocal_148)
	{
		iLocal_140 = 7;
	}
	iLocal_188 = unk_0xA5E11AF0A2B928C1();
	if (iLocal_190 && !bLocal_137)
	{
		if (unk_0x7DE17ACDD8BA2642(iLocal_63) && unk_0x7DE17ACDD8BA2642(iLocal_63))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_62) && !unk_0x66599E73DBA5A850(iLocal_63))
			{
				if ((((iLocal_188 - iLocal_187) > 12000 && !unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_63, 3f, 3f, 35f, 0, 1, 0)) && unk_0x865259F0333CAA4B(iLocal_63)) && !func_165())
				{
					if ((func_42(&uLocal_194, cLocal_103, "REMG2_FKIT", 4, 0, 0, 0) || func_62()) || func_62())
					{
						unk_0x992BB708B4B7A005(iLocal_63, 156, 1);
						unk_0x8A081C99487B906E(iLocal_63, unk_0x985D9D5ED4D5145A(iLocal_62, 31086, 0f, 0f, 0f), 0);
						unk_0x909F139DC199D8E0(iLocal_62);
						unk_0xED2BD879E739E86B(iLocal_62, 99, 0);
						unk_0xCF302B47D4B347F1(iLocal_63, Local_145, 250f, -1, 0, 0);
						unk_0x71A535529C1CA5DF(iLocal_63, 1);
						func_278();
					}
				}
			}
		}
	}
}

void func_204()
{
	Global_20591 = 0;
	func_56();
}

int func_205()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62) && !unk_0x66599E73DBA5A850(iLocal_63))
	{
		if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), iLocal_63) || unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), iLocal_62))
		{
			return 1;
		}
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_63, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_206()
{
	if (!unk_0x055111B11E6624FD(iLocal_62, 0))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_62) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_62))
			{
				if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (!unk_0x055111B11E6624FD(iLocal_63, 0))
	{
		if (func_157())
		{
			if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_62, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (unk_0xC832FC847E3442DA(iLocal_62, unk_0xC1A5EC5C986B98AD(), 17))
			{
				if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6) && !unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
				{
					if (!unk_0x66599E73DBA5A850(iLocal_63))
					{
						if (!unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_63))
						{
							if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_62) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_62))
							{
								unk_0x5AE11BC36633DE4E(0);
								return 1;
							}
						}
					}
					else if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iLocal_62) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iLocal_62))
					{
						unk_0x5AE11BC36633DE4E(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_208()
{
	if (!unk_0x055111B11E6624FD(iLocal_62, 0))
	{
		if (unk_0x612907CF3208D1E3(unk_0x985D9D5ED4D5145A(iLocal_62, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_209()
{
	if (!unk_0x66599E73DBA5A850(iLocal_62))
	{
		if (!unk_0x48A4D45B3B4CEFFD(iLocal_62))
		{
			if (func_194())
			{
				if (unk_0xF5F493B789EA063E(iLocal_62, joaat("script_task_perform_sequence")) == 7 || unk_0xF5F493B789EA063E(iLocal_62, joaat("script_task_cower")) == 7)
				{
					if (unk_0x0DCB385165FDE763())
					{
						func_108();
					}
					if (!unk_0x66599E73DBA5A850(iLocal_63))
					{
						if (!unk_0xC78375EA6037A7DB(iLocal_62))
						{
							unk_0xC6C9BF71106ABCAC(iLocal_62, iLocal_63, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_47 == 3)
					{
						if (!unk_0xC78375EA6037A7DB(iLocal_62))
						{
							unk_0xCF302B47D4B347F1(iLocal_62, Local_122, 150f, -1, 0, 0);
						}
					}
					unk_0x71A535529C1CA5DF(iLocal_62, 1);
					unk_0x4EDE34FBADD967A6(0);
					func_42(&uLocal_194, cLocal_103, sLocal_109, 4, 0, 0, 0);
					unk_0x4EDE34FBADD967A6(0);
					if (iLocal_192 > 0)
					{
						unk_0xCFFDA1550DF82B52(unk_0xC1A5EC5C986B98AD(), (iLocal_192 / 100) * 90);
						func_64(func_125(), 1, iLocal_192);
						unk_0x4EDE34FBADD967A6(0);
						func_210(func_125(), 1, (iLocal_192 / 10), 0, 1);
					}
					func_202(3);
					func_197();
				}
			}
			else
			{
				func_278();
			}
		}
		else
		{
			func_278();
		}
	}
	else
	{
		func_278();
	}
}

void func_210(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_96(iParam0) == 3)
	{
		return;
	}
	if (func_96(iParam0) == 4)
	{
		return;
	}
	func_65(func_96(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xDD7756E2742E0F6D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3CC35ACFFC9C730E(iVar1, iVar0, 1);
	}
}

int func_211()
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_189())
		{
			return 0;
		}
	}
	if (func_190())
	{
		return 1;
	}
	if (func_182(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	func_223();
	func_222(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_222(&uLocal_393, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_222(&uLocal_393, cLocal_377);
	func_222(&uLocal_393, cLocal_361);
	func_220(&uLocal_393, iLocal_83);
	func_220(&uLocal_393, iLocal_84);
	func_220(&uLocal_393, iLocal_85);
	func_222(&uLocal_393, cLocal_360);
	func_222(&uLocal_393, cLocal_359);
	func_222(&uLocal_393, cLocal_378);
	func_222(&uLocal_393, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_216(&uLocal_393))
	{
		func_213();
		return 1;
	}
	return 0;
}

void func_213()
{
	iLocal_62 = unk_0x69FDD9508259E5B5(26, iLocal_83, Local_69, fLocal_75, 1, 1);
	unk_0xC5B2830898581862(iLocal_62, 1);
	unk_0xD14067404D35AAE7(iLocal_62, 0);
	unk_0x474AA9EF29305EA8(iLocal_62, 8, 1);
	unk_0x474AA9EF29305EA8(iLocal_62, 128, 1);
	unk_0x474AA9EF29305EA8(iLocal_62, 512, 1);
	unk_0x57B1A0850EB7F1F4(iLocal_62, 1);
	unk_0x62A4E3375DF40CEC(iLocal_62);
	unk_0xCFFDA1550DF82B52(iLocal_62, 0);
	unk_0x52B0DD24AA97ABDB(iLocal_62, 1);
	if (iLocal_83 == joaat("a_m_y_genstreet_01"))
	{
		unk_0xFECAE061D8C80757(iLocal_62, 0, 1, 0, 0);
		unk_0xFECAE061D8C80757(iLocal_62, 3, 0, 3, 0);
		unk_0xFECAE061D8C80757(iLocal_62, 4, 0, 2, 0);
	}
	if (iLocal_83 == joaat("a_m_y_business_02"))
	{
		unk_0xFECAE061D8C80757(iLocal_62, 0, 1, 0, 0);
		unk_0xFECAE061D8C80757(iLocal_62, 2, 1, 0, 0);
		unk_0xFECAE061D8C80757(iLocal_62, 3, 1, 0, 0);
		unk_0xFECAE061D8C80757(iLocal_62, 4, 1, 0, 0);
		unk_0xFECAE061D8C80757(iLocal_62, 8, 0, 0, 0);
	}
	unk_0xDA95D0C19E737224("theAssailant", &iLocal_86);
	iLocal_63 = unk_0x69FDD9508259E5B5(26, iLocal_84, Local_72, fLocal_78, 1, 1);
	unk_0x351E6B9FD37CFF33(iLocal_63, 1, 1);
	unk_0xC5B2830898581862(iLocal_63, 1);
	unk_0xB0F23B683F51C9F0(iLocal_63, 1, 0);
	unk_0xCBDC2B59922F92C3(iLocal_63, joaat("weapon_pistol"), -1, 1, 1);
	unk_0x7FE5E05BE63F6CB8(iLocal_63, 13, 0);
	unk_0x7FE5E05BE63F6CB8(iLocal_63, 17, 0);
	unk_0xB7561E3CA1BE2262(iLocal_63, 1);
	unk_0x598D91BBD045C1F3(iLocal_63, 42, 1);
	unk_0x598D91BBD045C1F3(iLocal_63, 137, 1);
	unk_0x474AA9EF29305EA8(iLocal_63, 128, 1);
	unk_0x474AA9EF29305EA8(iLocal_63, 2, 0);
	unk_0x8386356641D0DED1(iLocal_63, iLocal_86);
	unk_0x57B1A0850EB7F1F4(iLocal_63, 1);
	if (!unk_0xB71C73D0269747D5(sLocal_120))
	{
		unk_0xEE72EF85581D1171(iLocal_62, sLocal_120);
	}
	unk_0xEE72EF85581D1171(iLocal_63, sLocal_119);
	unk_0x0133FF6E23A1DCA4(2, joaat("CIVMALE"), iLocal_86);
	unk_0x0133FF6E23A1DCA4(2, joaat("CIVFEMALE"), iLocal_86);
	unk_0x0133FF6E23A1DCA4(2, iLocal_86, joaat("CIVMALE"));
	unk_0x0133FF6E23A1DCA4(2, iLocal_86, joaat("CIVFEMALE"));
	unk_0x0133FF6E23A1DCA4(5, iLocal_86, joaat("player"));
	switch (func_125())
	{
		case 0:
			func_215(&uLocal_194, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_215(&uLocal_194, 0, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_215(&uLocal_194, 0, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
			break;
	}
	func_215(&uLocal_194, 1, iLocal_63, sLocal_118, 0, 1);
	func_215(&uLocal_194, 2, iLocal_62, sLocal_117, 0, 1);
	if (iLocal_47 == 2)
	{
		unk_0x474AA9EF29305EA8(iLocal_63, 1, 0);
	}
	if (bLocal_90 == 1 || bLocal_90 == 4)
	{
		func_214();
	}
	if (bLocal_90 == 3)
	{
		Local_125 = { -325.4189f, -828.8596f, 31.1f };
		Local_128 = { 0f, 0f, 180f };
		uLocal_131 = unk_0x191673E3F99212B2(Local_125, Local_128, 2);
		unk_0x468D976993BF7FE1(iLocal_63, uLocal_131, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (bLocal_90 == 4)
	{
		unk_0x287D2A0735EAC7FF(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_214()
{
	struct<3> Var0;
	
	unk_0x2EDDA32F6EF3C8B7(iLocal_63, unk_0xFC2542C169B039F2(cLocal_359, sLocal_365, Local_371, Local_374, 0, 2), 0, 0, 1);
	Var0 = { unk_0xEF996771DB3B2061(cLocal_359, sLocal_365, Local_371, Local_374, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0x692C3FDAD7DB53CC(iLocal_63, Var0.f_2);
	unk_0x2EDDA32F6EF3C8B7(iLocal_62, unk_0xFC2542C169B039F2(cLocal_359, sLocal_366, Local_371, Local_374, 0, 2), 0, 0, 1);
	Var0 = { unk_0xEF996771DB3B2061(cLocal_359, sLocal_366, Local_371, Local_374, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	unk_0x692C3FDAD7DB53CC(iLocal_62, Var0.f_2);
	unk_0x3EE48ADC8C7F5CC4(iLocal_63, cLocal_359, sLocal_365, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	unk_0x3EE48ADC8C7F5CC4(iLocal_62, cLocal_359, sLocal_366, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_215(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 0);
			}
			else
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 1);
			}
		}
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59B8D6E436F5B21C(iParam2, 0);
			}
			else
			{
				unk_0x59B8D6E436F5B21C(iParam2, 1);
			}
		}
	}
}

int func_216(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_217(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_217(var uParam0)
{
	return func_218(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_218(var uParam0, char[4] cParam1, var uParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_219(uParam0))
			{
				case 0:
					return unk_0x0CBB7C273DED26E7(uParam2);
					break;
				
				case 1:
					return unk_0x2BBF749E555360DC(uParam1);
					break;
				
				case 2:
					return unk_0xA6FA26A80B445074(cParam1);
					break;
				
				case 3:
					return unk_0x9812897315C21146(cParam1);
					break;
				
				case 4:
					return unk_0x56659E29BE303D7F(uParam2, cParam1);
					break;
				
				case 5:
					return unk_0xC546C50EE3EA181E(cParam1);
					break;
				
				case 6:
					return unk_0xF6AFEDAAE44A2159(cParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xAF83A305E6D700D3(uParam2);
					break;
				
				case 8:
					return unk_0x578F9DB3098790E9(uParam2);
					break;
				
				case 9:
					return unk_0x399D29F9238EE6B0();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_219(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_220(var uParam0, int iParam1)
{
	func_221(uParam0, 0, iParam1, "NULL", 0);
}

void func_221(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!unk_0x4310A0DB886F9FED(sParam3, "NULL"))
					{
						if (unk_0x4310A0DB886F9FED(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xECDAB41968FF21A8(uParam0[iVar0 /*18*/], bParam1);
			unk_0xECDAB41968FF21A8(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_222(var uParam0, char* sParam1)
{
	func_221(uParam0, 1, -1, sParam1, 0);
}

void func_223()
{
	func_276();
	unk_0xECDAB41968FF21A8(&uLocal_144, 3);
	unk_0xECDAB41968FF21A8(&uLocal_144, 4);
	unk_0xECDAB41968FF21A8(&uLocal_144, true);
	if (bLocal_90 == 1)
	{
		cLocal_359 = "RANDOM@MUGGING1";
		sLocal_365 = "STRUGGLE_Loop_A_Thief";
		sLocal_366 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_367 = "FLEE_BACKWARD_Thief";
		sLocal_370 = "FLEE_FORWARD_Shopkeeper";
		sLocal_369 = "FLEE_FORWARD_Thief";
		func_225();
		iLocal_192 = 200;
		iLocal_48 = 2;
		Local_145 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_83 = joaat("a_m_y_business_02");
		iLocal_84 = joaat("g_m_y_strpunk_01");
		Local_69 = { -138.814f, -1635.975f, 31.357f };
		fLocal_75 = 318.519f;
		Local_72 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_78 = 98f;
		Local_371 = { Local_69 };
		Local_374 = { 0f, 0f, fLocal_75 };
		Local_166 = { -103.8951f, -1593.239f, 30.49198f };
		Local_169 = { -89.29615f, -1575.444f, 32.30938f };
		Local_172 = { -152.0367f, -1654.379f, 31.73599f };
		Local_175 = { -169.8183f, -1669.556f, 33.94173f };
		Local_178 = { -152.0367f, -1654.379f, 31.73599f };
		Local_181 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_79 = 340.0645f;
		Local_80 = { -151.0793f, -1650.322f, 31.6504f };
		Local_87 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_85 = joaat("prop_ld_wallet_pickup");
		cLocal_103 = "REMG1AU";
		sLocal_104 = "REMG1_VIC";
		sLocal_105 = "REMG1_SHT";
		sLocal_106 = "REMG1_ASK";
		sLocal_107 = "REMG1_DRP";
		sLocal_108 = "REMG1_OHY";
		sLocal_109 = "REMG1_THK";
		sLocal_110 = "REMG1_GIV";
		sLocal_111 = "REMG1_MUGA";
		sLocal_112 = "REMG1_WHO";
		switch (func_125())
		{
			case 0:
				sLocal_115 = "REMG1_HOM";
				sLocal_116 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_115 = "REMG1_HOF";
				sLocal_116 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_115 = "REMG1_HOT";
				sLocal_116 = "REMG1_WAT";
				break;
		}
		sLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_120 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_117 = "MuggedMan";
		sLocal_118 = "MuggerGang";
		iLocal_50 = 1;
		cLocal_378 = "move_m@hurry@b";
	}
	if (bLocal_90 == 2)
	{
		cLocal_359 = "random@mugging2";
		cLocal_361 = "random@mugging2";
		iLocal_48 = 1;
		Local_145 = { 287.888f, -284.603f, 52.967f };
		iLocal_83 = joaat("a_f_y_genhot_01");
		iLocal_84 = joaat("g_m_y_strpunk_01");
		Local_69 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_75 = 260.7569f;
		Local_72 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_78 = 45f;
		fLocal_79 = 251f;
		Local_80 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_85 = joaat("prop_ld_handbag");
		cLocal_103 = "REMG2AU";
		sLocal_104 = "REMG2_VIC";
		sLocal_105 = "REMG2_SHT";
		sLocal_106 = "REMG2_ASK";
		sLocal_107 = "REMG2_DRP";
		sLocal_108 = "REMG2_OHY";
		sLocal_109 = "REMG2_THK";
		sLocal_110 = "REMG2_GIV";
		sLocal_112 = "REMG2_WHO";
		sLocal_113 = "REMG2_GUN";
		sLocal_114 = "REMG2_FUT";
		switch (func_125())
		{
			case 0:
				sLocal_115 = "REMG2_HOM";
				sLocal_116 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_115 = "REMG2_HOF";
				sLocal_116 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_115 = "REMG2_HOT";
				sLocal_116 = "REMG2_WAT";
				break;
		}
		sLocal_119 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_117 = "MuggedYMan";
		sLocal_118 = "MuggerGang";
		iLocal_50 = 1;
		cLocal_378 = "move_m@hurry@b";
	}
	if (iLocal_47 == 1)
	{
		func_224();
		iLocal_192 = 2000;
		iLocal_48 = 2;
		if (bLocal_90 == 3)
		{
			cLocal_359 = "RANDOM@MUGGING3";
			Local_145 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_83 = joaat("a_f_y_hipster_01");
			iLocal_84 = joaat("a_m_o_tramp_01");
			Local_69 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_75 = 80.7161f;
			Local_72 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_78 = 336.5502f;
			fLocal_79 = 81.8694f;
			Local_80 = { -322.3941f, -835.7213f, 30.6001f };
			Local_87 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_85 = joaat("prop_ld_purse_01");
			cLocal_103 = "REMG3AU";
			sLocal_104 = "REMG3_VIC";
			sLocal_105 = "REMG3_SHT";
			sLocal_106 = "REMG3_ASK";
			sLocal_107 = "REMG3_DRP";
			sLocal_108 = "REMG3_OHY";
			sLocal_109 = "REMG3_THK";
			sLocal_110 = "REMG3_GIV";
			sLocal_111 = "REMG3_MUGB";
			sLocal_112 = "REMG3_WHO";
			sLocal_113 = "REMG3_GUN";
			sLocal_114 = "REMG3_FUT";
			switch (func_125())
			{
				case 0:
					sLocal_115 = "REMG3_HOM";
					sLocal_116 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_115 = "REMG3_HOF";
					sLocal_116 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_115 = "REMG3_HOT";
					sLocal_116 = "REMG3_WAT";
					break;
			}
			sLocal_119 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_117 = "MUGGEDHIPSTER";
			sLocal_118 = "MuggerTramp";
			iLocal_50 = 1;
			cLocal_378 = "move_f@hurry@a";
		}
		if (bLocal_90 == 4)
		{
			func_224();
			cLocal_359 = "RANDOM@MUGGING4";
			sLocal_365 = "STRUGGLE_Loop_B_Thief";
			sLocal_366 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_368 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_367 = "FLEE_BACKWARD_Thief";
			sLocal_370 = "FLEE_FORWARD_Shopkeeper";
			sLocal_369 = "FLEE_FORWARD_Thief";
			Local_145 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_83 = joaat("a_f_m_tourist_01");
			iLocal_84 = joaat("g_m_y_armgoon_02");
			Local_69 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_75 = 159.1445f;
			Local_371 = { Local_69 };
			Local_374 = { 0f, 0f, fLocal_75 };
			Local_72 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_78 = 60.1372f;
			fLocal_79 = 248f;
			Local_80 = { 42.5323f, -990.353f, 28.248f };
			Local_166 = { 38.15186f, -1001.485f, 28.42276f };
			Local_169 = { 40.13669f, -995.2711f, 30.37197f };
			Local_172 = { 37.21758f, -1040.354f, 28.41506f };
			Local_175 = { 19.91492f, -1036.814f, 30.28045f };
			Local_178 = { 28.4511f, -1035.718f, 28.3329f };
			Local_181 = { 38.6536f, -1001.073f, 28.407f };
			Local_87 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_85 = joaat("prop_ld_wallet_pickup");
			cLocal_103 = "REMG4AU";
			sLocal_104 = "REMG4_VIC";
			sLocal_105 = "REMG4_SHT";
			sLocal_106 = "REMG4_ASK";
			sLocal_107 = "REMG4_DRP";
			sLocal_108 = "REMG4_OHY";
			sLocal_109 = "REMG4_THK";
			sLocal_110 = "REMG4_GIV";
			sLocal_111 = "REMG4_MUGB";
			sLocal_112 = "REMG4_WHO";
			sLocal_113 = "REMG4_GUN";
			sLocal_114 = "REMG4_FUT";
			switch (func_125())
			{
				case 0:
					sLocal_115 = "REMG4_HOM";
					sLocal_116 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_115 = "REMG4_HOF";
					sLocal_116 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_115 = "REMG4_HOT";
					sLocal_116 = "REMG4_WAT";
					break;
			}
			sLocal_119 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_117 = "MuggedWoman";
			sLocal_118 = "MuggerGang";
			iLocal_50 = 1;
			cLocal_378 = "move_f@hurry@a";
		}
	}
}

void func_224()
{
	cLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0x15A88CFAAFFC6C4B(0, 3))
	{
		case 0:
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Female";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Female";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Female";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_225()
{
	cLocal_361 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0x15A88CFAAFFC6C4B(0, 3))
	{
		case 0:
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Male";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Male";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Male";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_226(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0xA5E11AF0A2B928C1();
	}
	if (unk_0xCE4AAA035282336C(uParam0))
	{
		iVar0 = (unk_0xA5E11AF0A2B928C1() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xB77B29436394B1EB(iParam0) != 255)
				{
					unk_0x5E3A54CF3E9DF9FC(iParam0, 255);
				}
			}
			else if (unk_0xB77B29436394B1EB(iParam0) != 0)
			{
				unk_0x5E3A54CF3E9DF9FC(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xB77B29436394B1EB(iParam0) != 255)
			{
				unk_0x5E3A54CF3E9DF9FC(iParam0, 255);
			}
		}
	}
}

void func_227(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xE16824A2A0B2A6D8() >= (uParam0->f_272 + uParam0->f_273) || BitTest(Global_100681.f_20, 2)) || BitTest(Global_100681.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_228(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xE16824A2A0B2A6D8();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_228(var uParam0)
{
	func_229(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_229(var uParam0, char[4] cParam1, var uParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_219(*uParam0))
		{
			case 0:
				unk_0x852EC2A7DE66202D(uParam2);
				break;
			
			case 1:
				unk_0x28818732C8F0F80E(uParam1);
				break;
			
			case 2:
				unk_0x14004648CB41E983(uParam1);
				break;
			
			case 3:
				unk_0xEBA1698B77FD0A86(uParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC0B5FC4796023855(uParam2, uParam1);
				break;
			
			case 5:
				unk_0x7F2BD159A7FF94C0(uParam1);
				break;
			
			case 6:
				unk_0xF6AFEDAAE44A2159(uParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xD9C38C2E8E7C8C13(uParam2);
				break;
			
			case 8:
				unk_0xA3C681843B51A4CC(cParam1, uParam2);
				break;
			
			case 9:
				unk_0x10FC49B73AEEBE87();
				break;
			
			default:
				break;
		}
		unk_0xECDAB41968FF21A8(uParam0, 29);
	}
}

void func_230(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_195();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_232(iParam0);
	unk_0x1A59C174B4130991(0);
	unk_0xB1BC77E1EAD07BAE(1);
	Global_113634 = 0;
	func_231();
}

void func_231()
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x9C56520AE72AFDBF(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)), 1);
		}
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
	}
}

void func_232(int iParam0)
{
	Global_113637 = iParam0;
}

int func_233(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152234)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_195();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_273())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			Var1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_189())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_200(0))
		{
			return 0;
		}
		if (func_190())
		{
			return 0;
		}
		if (func_272())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_127(func_125()))
		{
			if (func_182(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_271(iParam3))
		{
			return 0;
		}
		if (func_127(func_125()))
		{
			if (func_270(func_125()) == 4 || func_270(func_125()) == 5)
			{
				return 0;
			}
		}
		if (func_127(func_125()))
		{
			if (!func_269(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_268(Global_113648.f_24997.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xA5E11AF0A2B928C1() - Global_113639) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_267())
		{
			return 0;
		}
		if (unk_0x5ABCFD3441B37CA6())
		{
			return 0;
		}
		if (unk_0xA847A0F368810680())
		{
			return 0;
		}
		if (!func_258(4))
		{
			return 0;
		}
		if (!func_177(5))
		{
			return 0;
		}
		if (func_257(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x4D3D95146FD3490D(unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD())))
		{
			if ((unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(377.153f, -717.567f, 10.0536f) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(320.9934f, 265.2515f, 82.1221f)) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_257(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_271(30) && !func_257(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_127(func_125()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113648.f_2365.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113648.f_2365.f_539.f_2296[iVar4];
				if (func_256(iVar8))
				{
					if (func_234(iVar4))
					{
						if (!func_28(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var5) < (210f * 210f))
							{
								if (func_125() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_235(iVar0);
}

int func_235(int iParam0)
{
	return func_236(iParam0, 1);
}

int func_236(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_256(iParam0))
	{
		return 0;
	}
	func_237(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_237(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_238(func_249(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_238(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_248(iParam0, iParam1))
	{
		iVar0 = func_247(iParam1);
		iVar1 = func_245(iParam0);
		iVar2 = (func_245(iParam0) - func_245(iParam1));
		iVar3 = (func_247(iParam0) - func_247(iParam1));
		iVar4 = (func_244(iParam0) - func_244(iParam1));
		iVar5 = (func_243(iParam0) - func_243(iParam1));
		iVar6 = (func_242(iParam0) - func_242(iParam1));
		iVar7 = (func_241(iParam0) - func_241(iParam1));
	}
	else
	{
		iVar0 = func_247(iParam0);
		iVar1 = func_245(iParam1);
		iVar2 = (func_245(iParam1) - func_245(iParam0));
		iVar3 = (func_247(iParam1) - func_247(iParam0));
		iVar4 = (func_244(iParam1) - func_244(iParam0));
		iVar5 = (func_243(iParam1) - func_243(iParam0));
		iVar6 = (func_242(iParam1) - func_242(iParam0));
		iVar7 = (func_241(iParam1) - func_241(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_240(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_239(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_239(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_240(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_241(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_242(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_243(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_244(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_245(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_246(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_246(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_247(int iParam0)
{
	return iParam0 & 15;
}

int func_248(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_256(iParam1) || !func_256(iParam0))
	{
		return 1;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_249()
{
	var uVar0;
	
	func_255(&uVar0, unk_0x731F95B6458DCF80());
	func_254(&uVar0, unk_0x77BBAAED3E25322C());
	func_253(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_252(&uVar0, unk_0x8C0F17CAC308A14B());
	func_251(&uVar0, unk_0x61117764C67882B7());
	func_250(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

void func_250(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_251(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_252(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_247(*uParam0);
	iVar1 = func_245(*uParam0);
	if (iParam1 < 1 || iParam1 > func_240(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_253(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_242(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_243(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_245(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_247(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_244(iParam0);
	if (iVar5 < 1 || iVar5 > func_240(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				iVar0 = func_125();
				if (!func_127(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_266()) || Global_112695) || Global_32166) || func_265()) || func_55(8, -1)) || func_264()) || func_263()) || func_262()) || func_261()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_266()) || Global_32166) || func_265()) || func_55(8, -1)) || func_262()) || func_264()) || func_263()) || func_261()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_266()) || Global_112695) || Global_32166) || func_265()) || func_55(8, -1)) || func_262()) || func_264()) || func_263()) || func_261()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_266()) || Global_112695) || Global_32166) || func_265()) || func_55(8, -1)) || func_264()) || func_263()) || func_261()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_266() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_55(8, -1)) || func_261()) || func_260()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_264()) || func_263()) || func_260()) || func_259())
						{
							return 0;
						}
						if ((unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3) && unk_0x19B3485E7C9D734D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
						{
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_266()) || Global_32166) || func_265()) || func_55(8, -1)) || func_263()) || func_262()) || func_261()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_266()) || func_263()) || Global_112695) || Global_32166) || func_265()) || Global_44446) || func_55(8, -1)) || func_262()) || func_260()) || func_261()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_266()) || Global_112695) || Global_32166) || func_265()) || func_55(8, -1)) || func_262()) || func_260()) || func_264()) || func_263()) || func_261())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_259()
{
	return Global_100720.f_1;
}

int func_260()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_261()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_262()
{
	if (Global_78819)
	{
		return 1;
	}
	else if (Global_63356 && !Global_63362)
	{
		return 1;
	}
	return 0;
}

bool func_263()
{
	return Global_100733.f_388 > 0;
}

bool func_264()
{
	return Global_100733.f_387 > 0;
}

var func_265()
{
	return Global_1575060;
}

int func_266()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_267()
{
	func_52();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_268(int iParam0)
{
	return func_248(func_249(), iParam0);
}

int func_269(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_125();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_270(int iParam0)
{
	if (!func_127(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_273())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113648.f_24997, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113648.f_24997.f_1, iVar0);
	}
	return iVar1;
}

int func_272()
{
	var uVar0;
	
	if (Global_32315)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xA66E176E5772E965(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_273()
{
	int iVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xECDAB41968FF21A8(&iVar0, 2);
				unk_0xECDAB41968FF21A8(&iVar0, 4);
				unk_0xECDAB41968FF21A8(&iVar0, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x7D33DF1E1089E1D1())
				{
					iVar0 = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&iVar0, false);
					unk_0x705949B096008718(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x7D33DF1E1089E1D1())
	{
		if (BitTest(unk_0x516080EA609481E1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_18576[iParam0 /*6*/], 3);
}

int func_275(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_18576[iParam0 /*6*/], 0);
}

void func_276()
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x2A488C176D52CCA5(Local_122, Local_91) < 20f)
		{
			bLocal_90 = true;
			iLocal_47 = 2;
		}
		if (unk_0x2A488C176D52CCA5(Local_122, Local_94) < 20f)
		{
			bLocal_90 = 2;
			iLocal_47 = 3;
		}
		if (unk_0x2A488C176D52CCA5(Local_122, Local_97) < 20f)
		{
			bLocal_90 = 3;
			iLocal_47 = 1;
		}
		if (unk_0x2A488C176D52CCA5(Local_122, Local_100) < 20f)
		{
			bLocal_90 = 4;
			iLocal_47 = 1;
		}
	}
}

void func_277(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_278()
{
	if (iLocal_156)
	{
		if (iLocal_50)
		{
			unk_0xE0A291F406691F03(iLocal_83);
			unk_0xE0A291F406691F03(iLocal_84);
			unk_0xE0A291F406691F03(iLocal_85);
		}
		if (!unk_0x66599E73DBA5A850(iLocal_63))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xC6C9BF71106ABCAC(iLocal_63, unk_0xC1A5EC5C986B98AD(), 150f, -1, 0, 0);
			}
			unk_0x71A535529C1CA5DF(iLocal_63, 1);
			if (!bLocal_60)
			{
				unk_0xCFFDA1550DF82B52(iLocal_63, iLocal_192);
			}
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_62))
		{
			if (!unk_0x66599E73DBA5A850(iLocal_62))
			{
				unk_0xD14067404D35AAE7(iLocal_62, 1);
				if (unk_0xF5F493B789EA063E(iLocal_62, joaat("script_task_wander_standard")) == 7 && unk_0xF5F493B789EA063E(iLocal_62, joaat("script_task_perform_sequence")) == 7)
				{
					unk_0xDBC7406226B5540E(&uLocal_121);
					if (unk_0xCC82082FAFB01DDF(iLocal_62))
					{
						unk_0x54868AF27F9BC1D5(0, 0);
					}
					unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), 9000, 0, 2);
					unk_0xCF302B47D4B347F1(0, Local_122, 250f, -1, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_121);
					unk_0x3D7110D966B0CEA2(iLocal_62, uLocal_121);
					unk_0x63EF69C6969A3D26(&uLocal_121);
					unk_0x71A535529C1CA5DF(iLocal_62, 1);
					if (!iLocal_154 && !iLocal_148)
					{
						if (unk_0x0DCB385165FDE763())
						{
							func_108();
						}
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xCE4AAA035282336C(iLocal_66))
		{
			unk_0x45533C09A6C9B409(&iLocal_66);
		}
		if (unk_0xCE4AAA035282336C(iLocal_65))
		{
			unk_0x45533C09A6C9B409(&iLocal_65);
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_64))
		{
			unk_0xC621CC7313639986(&iLocal_64);
		}
		if (unk_0xCE4AAA035282336C(iLocal_67))
		{
			unk_0x45533C09A6C9B409(&iLocal_67);
		}
	}
	if (iLocal_379 != -1)
	{
		if (unk_0xB504838E273ABA87(iLocal_379))
		{
			unk_0x72D15191FDAEBD63(iLocal_379);
		}
		iLocal_379 = -1;
	}
	if (func_194())
	{
		unk_0x8234DA302DC655DC(1);
		unk_0xFF2AF80F9EC7704C(1f);
	}
	func_37(&uLocal_380, 0, 0);
	func_112(0, 1, 1, 0, 0, 0, 0);
	func_284(-1);
	func_279(&uLocal_393, 0);
	if (iLocal_141 != 0)
	{
		unk_0xE7282371418F8E0E(iLocal_141);
	}
	unk_0x675D9C12C73D3DE7();
}

void func_279(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_281(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_280(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_280(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_281(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_282(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_282(var uParam0)
{
	func_283(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_283(var uParam0, var uParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_219(uParam0))
		{
			case 0:
				unk_0xE0A291F406691F03(uParam2);
				break;
			
			case 1:
				unk_0x0B34FA69ECCE3927(uParam1);
				break;
			
			case 2:
				unk_0x1401DAE4BB7FBFCD(uParam1);
				break;
			
			case 3:
				unk_0xFBA79BC11313B81D(uParam1);
				break;
			
			case 4:
				unk_0xC062EB7C484973F7(iParam2, uParam1);
				break;
			
			case 5:
				unk_0x0DE8FEF68764819C(uParam1);
				break;
			
			case 6:
				unk_0x214F8822B61C46FE();
				break;
			
			case 7:
				unk_0xA46627DF9B8B1FBE(iParam2);
				break;
			
			case 8:
				unk_0x32FF0B09752F532B(iParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0x42665493F0D75951();
				break;
			
			default:
				break;
		}
	}
}

void func_284(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_195();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_194())
	{
		func_289(iParam0);
		unk_0x97DBA2AA6C70AFC7(0, 0);
		Global_113639 = unk_0xA5E11AF0A2B928C1();
		func_288(30000);
		StringCopy(&cVar0, func_287(Global_113637, 1), 64);
		if (func_286(Global_113637) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113636, 64);
		}
		unk_0x36DDD3AC77856423(&cVar0, Global_113634, (unk_0xA5E11AF0A2B928C1() - Global_113635), 0);
	}
	else if (BitTest(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		unk_0x061B1200C95204CB(&Global_113644, false);
	}
	func_285(&Global_32223);
	Global_113638 = 0;
	func_232(-1);
}

void func_285(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
}

int func_286(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_287(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_288(int iParam0)
{
	Global_43808 = (unk_0xA5E11AF0A2B928C1() + iParam0);
}

void func_289(int iParam0)
{
	func_290(iParam0, 0, func_295(iParam0));
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_249();
	func_293(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_292(iParam0, &uVar0);
	Var1 = { func_291(&uVar0) };
}

struct<16> func_291(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_243(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_242(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_241(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_244(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_247(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_245(*uParam0), 64);
	return Var0;
}

void func_292(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_245(*uParam0);
	iVar1 = func_247(*uParam0);
	iVar2 = func_244(*uParam0);
	iVar3 = func_243(*uParam0);
	iVar4 = func_242(*uParam0);
	iVar5 = func_241(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_240(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_240(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_294(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_255(uParam0, iParam1);
	func_254(uParam0, iParam2);
	func_253(uParam0, iParam3);
	func_251(uParam0, iParam5);
	func_252(uParam0, iParam4);
	func_250(uParam0, iParam6);
}

int func_295(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_296(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_195();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_286(iParam0))
	{
		func_306(iParam0, bParam1);
		if (!func_305(51))
		{
			func_302("RE_REWARD", 1, 0, 4000, 10000, func_188(), 0, 138, 0);
			func_301(51);
		}
		if (func_173(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_300(iParam0, bParam1) != 322)
		{
			func_297(func_300(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113636 = bParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_202(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_202(7);
			}
			else
			{
				func_202(1);
			}
		}
	}
}

void func_297(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_74((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_298();
	}
}

void func_298()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0xE571C8D0AF67E3B4(joaat("num_rndevents_completed"), Global_113371, 0);
					unk_0xECDAB41968FF21A8(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_completed"), Global_113384, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_available"), Global_113367, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_completed"), Global_113385, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_available"), Global_113368, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_completed"), Global_113386, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_available"), Global_113369, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_completed"), Global_113387, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_available"), Global_113370, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_available"), Global_113374, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	unk_0x683F4BAF21D6EE25(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_story_missions"), Global_113391, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_ambient_missions"), Global_113392, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_oddjobs"), Global_113393, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853))
	{
		func_93(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_299() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_199();
				}
			}
		}
	}
}

int func_299()
{
	return Global_32163;
}

int func_300(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_20412.f_150[iVar1]), iVar0);
	}
}

void func_302(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_303(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_303(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x4310A0DB886F9FED(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x4310A0DB886F9FED(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113648.f_20412.f_145 < 9)
	{
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = (unk_0xA5E11AF0A2B928C1() + iParam3);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = ((unk_0xA5E11AF0A2B928C1() + iParam3) + iParam4);
		}
		else
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
		}
		Global_113648.f_20412.f_145++;
		func_304();
	}
}

void func_304()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113648.f_20412.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0])
			{
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1])
			{
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2])
			{
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113648.f_20412.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_306(int iParam0, bool bParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

