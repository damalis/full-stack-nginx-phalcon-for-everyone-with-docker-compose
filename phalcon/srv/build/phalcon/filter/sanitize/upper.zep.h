
extern zend_class_entry *phalcon_filter_sanitize_upper_ce;

ZEPHIR_INIT_CLASS(Phalcon_Filter_Sanitize_Upper);

PHP_METHOD(Phalcon_Filter_Sanitize_Upper, __invoke);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_filter_sanitize_upper___invoke, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, input, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_filter_sanitize_upper_method_entry) {
	PHP_ME(Phalcon_Filter_Sanitize_Upper, __invoke, arginfo_phalcon_filter_sanitize_upper___invoke, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
