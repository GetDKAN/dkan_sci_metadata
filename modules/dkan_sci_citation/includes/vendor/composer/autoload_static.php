<?php

// autoload_static.php @generated by Composer

namespace Composer\Autoload;

class ComposerStaticInitc72ec07db7c7b6ce374c45222ead47ab
{
    public static $files = array (
        'c964ee0ededf28c96ebd9db5099ef910' => __DIR__ . '/..' . '/guzzlehttp/promises/src/functions_include.php',
        'a0edc8309cc5e1d60e3047b5df6b7052' => __DIR__ . '/..' . '/guzzlehttp/psr7/src/functions_include.php',
        '37a3dc5111fe8f707ab4c132ef1dbc62' => __DIR__ . '/..' . '/guzzlehttp/guzzle/src/functions_include.php',
        '0e6d7bf4a5811bfa5cf40c5ccd6fae6a' => __DIR__ . '/..' . '/symfony/polyfill-mbstring/bootstrap.php',
        '1fe344de44467df4ee7eee836e8fcb77' => __DIR__ . '/..' . '/renanbr/crossref-client/src/CrossRefClient.php',
    );

    public static $prefixLengthsPsr4 = array (
        'S' => 
        array (
            'Symfony\\Polyfill\\Mbstring\\' => 26,
        ),
        'P' => 
        array (
            'Psr\\SimpleCache\\' => 16,
            'Psr\\Http\\Message\\' => 17,
        ),
        'M' => 
        array (
            'MyCLabs\\Enum\\' => 13,
        ),
        'K' => 
        array (
            'Kevinrob\\GuzzleCache\\' => 21,
        ),
        'G' => 
        array (
            'GuzzleHttp\\Psr7\\' => 16,
            'GuzzleHttp\\Promise\\' => 19,
            'GuzzleHttp\\' => 11,
        ),
    );

    public static $prefixDirsPsr4 = array (
        'Symfony\\Polyfill\\Mbstring\\' => 
        array (
            0 => __DIR__ . '/..' . '/symfony/polyfill-mbstring',
        ),
        'Psr\\SimpleCache\\' => 
        array (
            0 => __DIR__ . '/..' . '/psr/simple-cache/src',
        ),
        'Psr\\Http\\Message\\' => 
        array (
            0 => __DIR__ . '/..' . '/psr/http-message/src',
        ),
        'MyCLabs\\Enum\\' => 
        array (
            0 => __DIR__ . '/..' . '/myclabs/php-enum/src',
        ),
        'Kevinrob\\GuzzleCache\\' => 
        array (
            0 => __DIR__ . '/..' . '/kevinrob/guzzle-cache-middleware/src',
        ),
        'GuzzleHttp\\Psr7\\' => 
        array (
            0 => __DIR__ . '/..' . '/guzzlehttp/psr7/src',
        ),
        'GuzzleHttp\\Promise\\' => 
        array (
            0 => __DIR__ . '/..' . '/guzzlehttp/promises/src',
        ),
        'GuzzleHttp\\' => 
        array (
            0 => __DIR__ . '/..' . '/guzzlehttp/guzzle/src',
        ),
    );

    public static $fallbackDirsPsr4 = array (
        0 => __DIR__ . '/..' . '/seboettg/collection/src',
        1 => __DIR__ . '/..' . '/seboettg/citeproc-php/src',
    );

    public static $prefixesPsr0 = array (
        'A' => 
        array (
            'AudioLabs' => 
            array (
                0 => __DIR__ . '/..' . '/audiolabs/bibtexparser/src',
            ),
        ),
    );

    public static function getInitializer(ClassLoader $loader)
    {
        return \Closure::bind(function () use ($loader) {
            $loader->prefixLengthsPsr4 = ComposerStaticInitc72ec07db7c7b6ce374c45222ead47ab::$prefixLengthsPsr4;
            $loader->prefixDirsPsr4 = ComposerStaticInitc72ec07db7c7b6ce374c45222ead47ab::$prefixDirsPsr4;
            $loader->fallbackDirsPsr4 = ComposerStaticInitc72ec07db7c7b6ce374c45222ead47ab::$fallbackDirsPsr4;
            $loader->prefixesPsr0 = ComposerStaticInitc72ec07db7c7b6ce374c45222ead47ab::$prefixesPsr0;

        }, null, ClassLoader::class);
    }
}
